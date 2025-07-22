xml2cpp_prog = find_program('sdbus-c++-xml2cpp')

bindings = ['udisks_adaptor.hpp', 'udisks_proxy.hpp']

gen_bindings = custom_target(
  'gen-bindings',
  output: bindings,
  input: dbus_interface,
  command: [xml2cpp_prog, '@INPUT@', '--adaptor=@OUTPUT0@', '--proxy=@OUTPUT1@'],
  install: true,
  install_dir: 'include/' / meson.project_name(),
)

install_headers('errors.hpp', subdir : meson.project_name())
