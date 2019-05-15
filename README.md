# LoWe
Linux on Windows extender.

Ubuntu on Windows (WSL) released with Windows 10 Anniversary Update runs console based Linux apps on top of the Windows Kernel, not even all of them. The goal of this project is to extend the current functionality of Ubuntu on Windows with support for X apps, video, and sound. Reliability, UX, functionality improvements are expected in the future. **LoWe officially supports Ubuntu 16 LTS on at least Windows 10 (Fall) Creators Update and Ubuntu 18 LTS on Windows 10 October 2018 Update**. *If you're still running Windows 10 Anniversary Update with Ubuntu 14 LTS then please checkout w10auu14 branch.*

Special thanks to Dean Beeler (@canadacow) for his efforts making Ubuntu 18 work.

Feedback is welcome.

### Bash on Ubuntu on Windows and WSL can really play video and music.

![working LoWe and mplayer](docs/img/readme/01_mplayer.jpg "Ubuntu on Windows can play video and music")

### Graphical apps on Unity on X.Org on Bash on Ubuntu on Windows

With LoWe it's possible to run X programs without employing any third-party X servers.

It's a bit buggy, but works. 

#### Firefox, xterm, xeyes, xclock

![working LoWe and X](docs/img/readme/02_x1.jpg "Ubuntu on Windows can run x")

#### LibreOffice Writer, Klondike

![working LoWe and X](docs/img/readme/03_x2.jpg "Ubuntu on Windows can run x")

#### Inkscape, mc, Software![working LoWe and X](docs/img/readme/04_x3.jpg "Ubuntu on Windows can run x")

# Details

- [How It Works](docs/howitworks.md)
- [Building LoWe components](docs/buildrun.md)
- [Running mplayer](docs/mplayer.md)
- [Running X programs](docs/x.md)
