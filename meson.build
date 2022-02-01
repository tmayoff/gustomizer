project('gustomizer', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3',
                     'cpp_std=c++20'])

gtk = dependency('gtk4')

exe = executable('gustomizer', 'main.cpp', dependencies: [gtk], install : true)

test('basic', exe)
