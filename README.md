# udisks-sdbus-c++

Auto-generated sdbus-c++ bindings for UDisks D-Bus API.

## Building

### Setup

Make sure the project version matches the `udisks2` Meson dependency:
this determines which UDisks version the bindings will match.

At the setup phase, you must define the `dbus_interface_path` Meson option:
this is the UDisks D-Bus interface description file that the project will
retrieve in the setup process, installing it in `dbus/`.

> [!WARNING]
> It will always overwrite any existing D-Bus interface description file:
> `dbus/org.freedesktop.UDisks2.xml` will get overwritten!

You can either do this at the command line:

```sh
meson setup \
  -Ddbus_interface_path='/usr/share/dbus-1/interfaces/org.freedesktop.UDisks2.xml' \
  builddir
```

...or in the `meson_options.txt` file, or even your project's
`meson.options`/`meson_options.txt`, since the option [yields to the
superproject](https://mesonbuild.com/Build-options.html#yielding-to-superproject-option).

### Compile

Just run `meson compile -C builddir`

### Install

Both the adaptor (server) and proxy (client) bindings headers will get installed
to the standard include directory, which is usually `/usr/local/include`.

Just run `meson install -C builddir`

If you're packaging the library, you can override the prefix directory, as
always: look at the [Meson documentation](https://mesonbuild.com/Installing.html#destdir-support).

## Use as Meson subproject

> [!NOTE]
> Incomplete.

<!-- TODO(xlacroixx): complete -->

Dependency variable: `udisks_sdbus_cpp_dep`
