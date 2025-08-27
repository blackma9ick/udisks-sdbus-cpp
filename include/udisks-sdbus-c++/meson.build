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

install_headers(
	'udisks_errors.hpp',
	'udisks_globals.hpp',
	'udisks_proxy_wrappers.hpp',
	subdir : meson.project_name(),
)
