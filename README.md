# Project Alpha (Temporary)
![showfloorlogo](https://github.com/user-attachments/assets/255078c5-d31c-4284-a720-f1f2ddcefd4f)

## Introduction

**Project Alpha (Temp)** is a recreation of hoax/fan-made alpha build version of Super Mario 64, based on [backstage by 96flashbacks](https://github.com/96flashbacks/backstage).

## Installation

The build process is the same as the [SM64 Decomp's](https://github.com/n64decomp/sm64).
Follow their [README](https://github.com/n64decomp/sm64/blob/master/README.md#installation) for setup steps and prerequisites (dependencies, baserom, etc).

Clone and build:

```sh
git clone https://github.com/96flashbacks/showfloor.git
cd showfloor
make
```

### RSP Microcode

This project uses the same `GRUCODE` build variable as the SM64 Decomp, but with different options.

Default is `f3d_102695`.

- `f3d_102695`: gspFast3D from Ultra 64 OS release 102695 (U64 Aging Cartridge). Not HLE-compatible.
- `f3d_20E`: gspFast3D from OS 2.0E (bbgames' ostrees). HLE-compatible.

Build with a specific microcode:

```sh
make GRUCODE=f3d_20E
```

## Q&A

**uhh what is this?**

IDK.

**Can I Contribute to this?**

Yes!

**I FORCE TO ADD THIS ASSETS AND I ORDER TO REPLACE THIS TEXTURE WITH MORE BEYTAH AGGHHGGG**

Nuh.

## Credits

### 'Project Alpha (Temp)' Team/Contributors

#### Main Programming
- timmy6259

#### Assets
- Rederio (Texture/Idea)

### Original '96flashbacks' Team

#### Main Programming
- stalechilibeans
- 1up Guy

#### Additional Programming
- ummheather
- iProgramInCpp

#### Assets
- Scraps
- ummheather
- 1up Guy
- stalechilibeans
- `K-Dubs΄

#### Music & Audio
- `K-Dubs΄
- 1up Guy
- stalechilibeans
- ummheather

#### Research & Playtesting
- Scraps
- Sleekflash16
- duskewl/jadu
- `K-Dubs΄
  
### Original '96flashbacks' Server Contributors

#### Additional Programming
- Phil564
- klorfmorf/Fluvian
- diesel64
- penguinlambz

#### Assets
- toonjoey
- Lurondor
- icehotlemonade
- Neverax
- Diamond Hero
- Holo
- Mr. Hatsman/sonicdude143

#### Music & Audio
- skibidigurt
- toonjoey
- RetroDev
- emlimate
- XKoop7321

#### Miscellaneous Help
- packrcrackr
- Xiartic
- Woohale54
- RM05
- timmy6259
- Zucchino
- Xerox
  
#### Special Thanks
- na0micakes
- toonjoey
- Matsilagi
- lunr
- CharD
- RM05
- icehotlemonade
- Tony (Hard4Games)
- aaali

### Original 'The Preservation Project' Team

#### Programming
- klorfmorf/Fluvian
- Marionova
  
#### Assets
- EmmaNerd
- CDi-Fails
- Lurondor
- Robichu
- Zucchino
- Holo

#### Research & Playtesting
- Xiartic
- lunr
  
#### Original 'The Preservation Project' Contributors
- 1up Guy
- Guestpiki
- iProgramInCpp
- Toru the Red Fox
- CreamDream
- Diamond Hero

### Tools & Resources
- [Fast64](https://github.com/Fast-64/fast64)
- [SM64 Decomp](https://github.com/n64decomp/sm64)
- [64History’s Archives](https://archive.org/details/sm64-beta-content)
- [Dudaw’s Archives](https://archive.org/details/sm64brp_src_abandoned)
- [Roovahlees’s Archives](https://archive.org/details/@roovahlees)
- [VGM & Other Instrument Sources Spreadsheet](https://docs.google.com/spreadsheets/d/1JJBlHHDc65fhZmKUGLrDTLCm6rfUU83-kbuD8Y0zU0o/edit?gid=2047725819#gid=2047725819)
- [Retro Aesthetics’ Mario Series Matches](https://retroaesthetics.net/mario-series-matches/)
- [TCRF’s Page](https://tcrf.net/Prerelease:Super_Mario_64_(Nintendo_64)/Shoshinkai_1995_Demo)
- [Original TPP Source Code](https://github.com/Sunlitspace542/tpp-mirror)
- [Original Backstage Source Code](https://github.com/96flashbacks/backstage)
- [SM64 CLASSIFIED (tetrabunz): Genesis](https://youtu.be/SMgo_vG2mYI)

Huge thanks to everyone in this Lists.