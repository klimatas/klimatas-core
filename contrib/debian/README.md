
Debian
====================
This directory contains files used to package ktsd/kts-qt
for Debian-based Linux systems. If you compile ktsd/kts-qt yourself, there are some useful files here.

## kts: URI support ##


kts-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install kts-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your ktsqt binary to `/usr/bin`
and the `../../share/pixmaps/kts128.png` to `/usr/share/pixmaps`

kts-qt.protocol (KDE)

