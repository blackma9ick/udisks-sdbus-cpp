# udisks-sdbus-c++

> [!WARNING]
> Unstable! Will be stable once udisks-sdbus-c++ reaches version 1.

Auto-generated [sdbus-c++] bindings for UDisks D-Bus API.
Header-only library.

Minimum C++ standard version required: C++17
(same as required by [sdbus-c++])

## Building

### Setup

Minimum Meson version required: `0.63.0`

Make sure the project version matches the `udisks2` Meson dependency:
this determines which UDisks version the bindings will match.

At the setup phase, you must define the `udisks_dbus_interface` Meson option:
this is the UDisks D-Bus interface description file that the project will
retrieve in the setup process, installing it in `dbus/`.

> [!WARNING]
> It will always overwrite any existing D-Bus interface description file:
> `dbus/org.freedesktop.UDisks2.xml` will get overwritten!

You can either do this at the command line:

```sh
meson setup \
  -Dudisks_dbus_interface='/usr/share/dbus-1/interfaces/org.freedesktop.UDisks2.xml' \
  builddir
```

...or in the `meson_options.txt` file, or even your project's
`meson.options`/`meson_options.txt`, since the option [yields to the
superproject](https://mesonbuild.com/Build-options.html#yielding-to-superproject-option).

### Compile

Just run `meson compile -C builddir`

### Install

Both the adaptor (server) and proxy (client) bindings headers will get installed
to a subdirectory in the standard system include directory.
Usually this is `/usr/local/include/udisks-sdbus-c++`.

Just run `meson install -C builddir`

If you're packaging the library, you can override the prefix directory, as
always: look at the [Meson documentation](https://mesonbuild.com/Installing.html#destdir-support).

## Use as Meson subproject

> [!NOTE]
> Incomplete.

<!-- TODO(blackma9ick): complete -->

Dependency variable: `udisks_sdbus_cpp_dep`

## Versioning

udisks-sdbus-c++ follows UDisks's major and minor version numbers
(`MAJOR.MINOR.patch`, `patch` is not followed), and a library specific patch
version number (`[...]-LIBRARY`).

The resulting version scheme looks like: `MAJOR.MINOR-LIBRARY`

UDisks promises to bump the major version number upon breaking changes, i.e.,
UDisks partially follows SemVer.
See [`udisks(8)`](https://manpages.debian.org/stretch/udisks2/udisks.8.en.html#API_STABILITY)
for more information.

Thus, udisks-sdbus-c++ **guarantees a stable D-Bus API** on the **same major
version number**.

udisks-sdbus-c++ will only introduce breaking changes to the library on UDisks
major version number bumps. udisks-sdbus-c++ **will not introduce breaking
changes between patch version number bumps**.

## Disclaimer

This project is not affiliated with [sdbus-c++] or Kistler Group.

## License

Licensed under the [MIT License](LICENSE).

[sdbus-c++]: https://github.com/Kistler-Group/sdbus-cpp/
