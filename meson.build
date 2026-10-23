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

executable('matrix-perspective',
  sources: [
    'src/04/matrix-perspective.cpp'
    ],
  dependencies: deps
  )

executable('aspect-ratio',
  sources: [
    'src/04/aspect-ratio.cpp'
    ],
  dependencies: deps
  )

executable('overlap-no-depth',
  sources: [
    'src/05/overlap-no-depth.cpp'
    ],
  dependencies: deps
  )

executable('base-vert-overlap',
  sources: [
    'src/05/base-vert-overlap.cpp'
    ],
  dependencies: deps
  )

executable('depth-buffer',
  sources: [
    'src/05/depth-buffer.cpp'
    ],
  dependencies: deps
  )

executable('vert-clip',
  sources: [
    'src/05/vert-clip.cpp'
    ],
  dependencies: deps
  )

executable('depth-clamp',
  sources: [
    'src/05/depth-clamp.cpp'
    ],
  dependencies: deps
  )

executable('depth-fight',
  sources: [
    'src/05/depth-fight.cpp'
    ],
  dependencies: deps
  )

executable('translation',
  sources: [
    'src/06/translation.cpp'
    ],
  dependencies: deps
  )

executable('scale',
  sources: [
    'src/06/scale.cpp'
    ],
  dependencies: deps
  )

executable('rotation',
  sources: [
    'src/06/rotation.cpp'
    ],
  dependencies: deps
  )

executable('hierarchy',
  sources: [
    'src/06/hierarchy.cpp'
    ],
  dependencies: deps
  )

