#include <string>
#include <vector>
#include <math.h>
#include <glload/gl_3_3.h>
#include <GL/freeglut.h>
#include "../framework/framework.h"

GLuint theProgram;
GLint offsetLocation;

void InitializeProgram()
{
	std::vector<GLuint> shaderList;

	shaderList.push_back(Framework::LoadShader(GL_VERTEX_SHADER, "03/positionOffset.vert"));
	shaderList.push_back(Framework::LoadShader(GL_FRAGMENT_SHADER, "03/standard.frag"));

	theProgram = Framework::CreateProgram(shaderList);

	offsetLocation = glGetUniformLocation(theProgram, "offset");
}

const float vertexPositions[] = {
	0.25f, 0.25f, 0.0f, 1.0f,
	0.25f, -0.25f, 0.0f, 1.0f,
	-0.25f, -0.25f, 0.0f, 1.0f,
};

GLuint positionBufferObject;
GLuint vao;

void InitializeVertexBuffer()
{
	glGenBuffers(1, &positionBufferObject);

	glBindBuffer(GL_ARRAY_BUFFER, positionBufferObject);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertexPositions), vertexPositions, GL_STATIC_DRAW);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
}

void init()
{
	InitializeProgram();
	InitializeVertexBuffer();

	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);
}

void ComputePositionOffsets(float &fXOffset, float &fYOffset)
{
	const float fLoopDuration = 5.0f;
	const float fScale = 3.14159f * 2.0f / fLoopDuration;

	float fElapsedTime = glutGet(GLUT_ELAPSED_TIME) / 1000.0f;

	float fCurrTimeThroughLoop = fmodf(fElapsedTime, fLoopDuration);

	fXOffset = cosf(fCurrTimeThroughLoop * fScale) * 0.5f;
	fYOffset = sinf(fCurrTimeThroughLoop * fScale) * 0.5f;
}

void display()
{
	float fXOffset = 0.0f, fYOffset = 0.0f;
	ComputePositionOffsets(fXOffset, fYOffset);

	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	glUseProgram(theProgram);

	glUniform2f(offsetLocation, fXOffset, fYOffset);

	glBindBuffer(GL_ARRAY_BUFFER, positionBufferObject);
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 4, GL_FLOAT, GL_FALSE, 0, 0);

	glDrawArrays(GL_TRIANGLES, 0, 3);

	glDisableVertexAttribArray(0);
	glUseProgram(0);

	glutSwapBuffers();
	glutPostRedisplay();
}

void reshape (int w, int h)
{
	glViewport(0, 0, (GLsizei) w, (GLsizei) h);
}

void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 27:
		glutLeaveMainLoop();
		return;
	}
}

unsigned int defaults(unsigned int displayMode, int &width, int &height) {return displayMode;}

