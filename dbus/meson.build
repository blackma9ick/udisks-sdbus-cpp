udisks_dbus_interface = get_option('udisks_dbus_interface')

if udisks_dbus_interface == ''
  error(
    '''Path to UDisks D-Bus API interface file was not given;
please provide `udisks_dbus_interface` in meson_options.txt
or run `meson setup -Dudisks_dbus_interface={PATH} build`.''',
  )
endif

cp_prog = find_program('cp')

run_command(cp_prog, udisks_dbus_interface, meson.current_source_dir(), check: true)
