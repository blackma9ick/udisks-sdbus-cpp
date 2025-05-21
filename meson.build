project(
  'udisks-sdbus-c++',
  'cpp',
  version: '2.10.1',
  license: 'MIT',
  meson_version: '>=0.63.0',
)
project_friendly_name = meson.project_name().replace('+', 'p')
project_description = 'Auto-generated sdbus-c++ bindings for UDisks D-Bus API'

sdbus_cpp = dependency('sdbus-c++', version: ['>=2.1.0', '<=3.0.0']) # SemVer
# We want to provide strong versioning against UDisks.
# However maybe this is too strong; maybe allow any MINOR (0.0.X) version?
udisks2 = dependency('udisks2', version: meson.project_version())

subdir('dbus')

dbus_interface = files('dbus/org.freedesktop.UDisks2.xml')

subdir('include/udisks-sdbus-c++')

project_dep = declare_dependency(
  dependencies: [sdbus_cpp, udisks2],
  include_directories: 'include',
  sources: [gen_bindings],
)
set_variable(
  project_friendly_name.replace('-', '_') + '_dep',
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
