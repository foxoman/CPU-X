# CPU-X

CPU-X is a Free software that gathers information on CPU, motherboard and more.  
CPU-X is similar to CPU-Z (only available for Microsoft Windows, see http://www.cpuid.com/softwares/cpu-z.html for more informations), but CPU-X is designed for GNU/Linux.  
It is written in C, and Graphical User Interface (GUI) uses GTK3+ library, so it's working out-of-box on X11 or Wayland.  
It is also possible to run a Text-based User Interface (TUI) which uses NCurses, or else to print data on standard output.


## Dependencies

* GTK3+ (version 3.10 or uppers recommanded)
    * Graphical User Interface (GUI)
    * http://www.gtk.org/
    * Required to run CPU-X in GTK mode; **not** embedded in portable version

* Ncurses
    * Text-based User Interface (TUI)
    * http://www.gnu.org/software/ncurses/
    * Required to run CPU-X in NCurses mode; embedded in portable version

* Libcpuid
    * Extract CPU features
    * http://libcpuid.sourceforge.net/
    * Required to run CPU-X correctly; embedded in portable version

* Procps-ng
    * Usefull informations on system
    * http://sourceforge.net/projects/procps-ng/
    * Required to run CPU-X correctly; embedded in portable version


## Build

For step-by-step guide, you can see the [wiki page](https://github.com/X0rg/CPU-X/wiki).  
First, you must to have CMake installed to continue (only needed for building).
GTK headers are needed to compile with GTK support.  
You can disable some functionalities by passing argument `-D<var>=0` when running CMake, like this:  
`-DWITH_GTK=0` will disable support of GUI in GTK3+  
`-DWITH_NCURSES=0` will disable support of NCurses mode (need to run from a shell)  
`-DWITH_LIBCPUID=0` will avoid calls to Libcpuid (not recommended)  
`-DWITH_LIBDMI=0` will not compile Libdmi and will avoid calls to Libdmi (not recommended)  
`-DWITH_LIBSYSTEM=0` will avoid calls to Libprocps (not recommended) 

* If you want to install CPU-X on your system, do:
```
mkdir build && cd build
cmake ..
make
make install
```
By default, CPU-X will be installed in */usr/local*. If you want to change it, change `cmake ..` by `cmake -DCMAKE_INSTALL_PREFIX=YOUR_ABSOLUTE_PATH ..`.

* If you want a portable binary, do:
```
mkdir ebuild && cd ebuild
cmake -DEMBED=1 ..
make
```

Note: portable binary will be in directory "ebuild/bin". Don't do `make install` after.

## Usage

Start program with **root privileges** allow to use **Dmidecode** (Libdmi).  
Simply run command `cpu-x` if it is installed on you system, or double-click on `cpu-x` is also possible.  
Two application files are installed if GTK is enabled: one use pkexec and allow you to run CPU-X as root.  
If GTK and NCurses are supported, you can start CPU-X in NCurses mode by taping in a shell (as root) `cpu-x --ncurses`.  
Use `cpu-x --help` for other commands and help.


## Download binairies

You can also download an archive with two portable binaries (i686 & x86_64) at https://github.com/X0rg/CPU-X/releases (file "CPU-X_portable.tar.gz").


## Screenshots

You can see CPU-X here:
https://github.com/X0rg/CPU-X/wiki/Screenshots


## Translate

You want to translate CPU-X? No problem!  
Fork this repo, then clone your fork, and generate the .pot (Portable Object Template) file like this:
```
mkdir build && cd build
cmake ..
make genpot
```
It will produce file `cpu-x.pot`, located in `po` directory. Copy it to `<lang>.po` and start to translate...
