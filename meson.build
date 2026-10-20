project('gl-examples', 'cpp')

cmake = import('cmake')
glsdk_proj = cmake.subproject('glsdk')
freeglut_dep = glsdk_proj.dependency('freeglut')
glload_dep = glsdk_proj.dependency('glload')
glimg_dep = glsdk_proj.dependency('glimg')
glutil_dep = glsdk_proj.dependency('glutil')
framework_dep = glsdk_proj.dependency('framework')
gl_dep = dependency('gl')
x11_dep = dependency('x11')

deps = [
  freeglut_dep,
  glload_dep,
  glimg_dep,
  glutil_dep,
  framework_dep,
  gl_dep,
  x11_dep
  ]

executable('hello-triangle',
  sources: [
    'src/01/hello-triangle.cpp'
    ],
  dependencies: deps
  )

executable('frag-pos',
  sources: [
    'src/02/frag-pos.cpp'
    ],
  dependencies: deps
  )

executable('vert-col',
  sources: [
    'src/02/vert-col.cpp'
    ],
  dependencies: deps
  )

executable('cpu-pos-offset',
  sources: [
    'src/03/cpu-pos-offset.cpp'
    ],
  dependencies: deps
  )

executable('vert-pos-offset',
  sources: [
    'src/03/vert-pos-offset.cpp'
    ],
  dependencies: deps
  )

executable('vert-calc-offset',
  sources: [
    'src/03/vert-calc-offset.cpp'
    ],
  dependencies: deps
  )

executable('frag-change-col',
  sources: [
    'src/03/frag-change-col.cpp'
    ],
  dependencies: deps
  )

executable('ortho-cube',
  sources: [
    'src/04/ortho-cube.cpp'
    ],
  dependencies: deps
  )

executable('shader-perspective',
  sources: [
    'src/04/shader-perspective.cpp'
    ],
  dependencies: deps
  )

