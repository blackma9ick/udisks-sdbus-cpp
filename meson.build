project(
  'udisks-sdbus-c++',
  'cpp',
  version: '2.10-1',
  license: 'MIT',
  meson_version: '>=0.63.0',
)
project_friendly_name = meson.project_name().replace('+', 'p')
project_description = 'Auto-generated sdbus-c++ bindings for UDisks D-Bus API'

udisks2_current_version = meson.project_version().split('-')[0]

# sdbus-c++ follows SemVer.
sdbus_cpp = dependency('sdbus-c++', version: ['>=2.1.0', '<3.0.0'])
udisks2 = dependency('udisks2', version: ['>=' + udisks2_current_version, '<3.0.0'])

subdir('dbus')

dbus_interface = files('dbus/org.freedesktop.UDisks2.xml')

subdir('include/udisks-sdbus-c++')

inc_dir = include_directories('include')

project_dep = declare_dependency(
  dependencies: [sdbus_cpp, udisks2],
  include_directories: inc_dir,
  sources: [gen_bindings],
)
set_variable(
  project_friendly_name.underscorify() + '_dep',
  project_dep,
)

# TEST(xlacroixx): grab an UDisks example program.

pkg = import('pkgconfig')
pkg.generate(
  name: meson.project_name(),
  filebase: meson.project_name(),
  description: project_description,
  subdirs: meson.project_name(),
  requires: [sdbus_cpp, udisks2],
  url: 'https://codeberg.org/xlacroixx/' + project_friendly_name,
)
