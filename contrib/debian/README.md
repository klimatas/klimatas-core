
Debian
====================
This directory contains files used to package klimatasd/klimatas-qt
for Debian-based Linux systems. If you compile klimatasd/klimatas-qt yourself, there are some useful files here.

## klimatas: URI support ##


klimatas-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install klimatas-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your klimatasqt binary to `/usr/bin`
and the `../../share/pixmaps/klimatas128.png` to `/usr/share/pixmaps`

klimatas-qt.protocol (KDE)

