project('gl-examples', 'c')

cmake = import('cmake')
glsdk_proj = cmake.subproject('glsdk')
freeglut_dep = glsdk_proj.dependency('freeglut')
glload_dep = glsdk_proj.dependency('glload')
glimg_dep = glsdk_proj.dependency('glimg')
glutil_dep = glsdk_proj.dependency('glutil')
gl_dep = dependency('gl')

deps = [
  freeglut_dep,
  glload_dep,
  glimg_dep,
  glutil_dep,
  gl_dep
  ]

srcs = [
  'src/main.c'
  ]

executable('gl-examples', sources: srcs, dependencies: deps)

