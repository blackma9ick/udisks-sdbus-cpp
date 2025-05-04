project(
  'udisks-sdbus-cpp',
  'cpp',
  version: '2.10.1',
  default_options: ['warning_level=3'],
  meson_version: '>=0.63.0',
)
project_description = 'Auto-generated sdbus-c++ bindings for UDisks D-Bus API'

sdbus_cpp = dependency('sdbus-c++', version: ['>=2.1.0', '<=3.0.0']) # semver
udisks2 = dependency('udisks2', version: meson.project_version())

subdir('dbus')

dbus_interface = files('dbus/org.freedesktop.UDisks2.xml')

subdir('include')

project_dep = declare_dependency(
  dependencies: [sdbus_cpp, udisks2],
  include_directories: 'include',
  sources: [gen_udisks_sdbus_bindings],
)
set_variable(meson.project_name().replace('-', '_') + '_dep', project_dep)

# TODO(xlacroixx): tests
# if not meson.is_subproject()
#   add_languages('cpp')
#   subdir('tests')
#
#   test('all_tests',
#     executable(
#       'run_tests',
#       files(project_test_files),
#       dependencies : [project_dep, test_dep],
#       install : false
#     )
#   )
# endif

pkg = import('pkgconfig')
pkg.generate(
  name: meson.project_name(),
  filebase: meson.project_name(),
  description: project_description,
  subdirs: meson.project_name(),
  requires: [sdbus_cpp, udisks2],
  url: 'https://codeberg.org/xlacroixx/' + meson.project_name(),
)
