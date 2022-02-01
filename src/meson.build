sources += files('main.cpp')

gnome = import('gnome')
resources = gnome.compile_resources('gui-resources', 'gui/gustomizer.gresources.xml', source_dir: 'gui', c_name: 'gui')
sources += resources
