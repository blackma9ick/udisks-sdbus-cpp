dbus_interface_path = get_option('dbus_interface_path')

if dbus_interface_path == ''
  error(
    '''Path to UDisks D-Bus API interface file was not given;
please run `meson setup -Ddbus_interface_path={PATH} build`.''',
  )
endif

cp_prog = find_program('cp')

run_command(cp_prog, dbus_interface_path, meson.current_source_dir(), check: true)
