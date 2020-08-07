
Debian
====================
This directory contains files used to package poriund/poriun-qt
for Debian-based Linux systems. If you compile poriund/poriun-qt yourself, there are some useful files here.

## poriun: URI support ##


poriun-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install poriun-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your poriun-qt binary to `/usr/bin`
and the `../../share/pixmaps/poriun128.png` to `/usr/share/pixmaps`

poriun-qt.protocol (KDE)

