project('gustomizer', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3',
                     'cpp_std=c++20'])

add_project_arguments('-DSOURCE_ROOT="' + meson.current_source_dir() + '/src"', language: 'cpp')

gtk = dependency('gtk4')

sources = []
subdir('src')

exe = executable('gustomizer', sources, include_directories: 'src', dependencies: [gtk], install : true)

test('basic', exe)
