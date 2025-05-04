xml2cpp_prog = find_program('sdbus-c++-xml2cpp')

gen_udisks_sdbus_bindings = custom_target(
  'udisks-sdbus-bindings',
  output: ['udisks-adaptor.hpp', 'udisks-proxy.hpp'],
  input: dbus_interface,
  command: [xml2cpp_prog, '@INPUT@', '--adaptor=@OUTPUT0@', '--proxy=@OUTPUT1@'],
  install: true,
  install_dir: 'include',
)
