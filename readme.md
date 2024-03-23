![Aurora Corne](https://i.imgur.com/t4EQ77Lh.jpg)

# Aurora Corne

This project is based on the Aurora Corne, a redesign by splitkb.com of the popular Corne keyboard (also known as the crkbd or the Helidox) by Foostan.

Keyboard Maintainer: [splitkb.com](https://github.com/splitkb)  
Hardware Supported: Pro Micro 5V/16MHz and compatible.  
Hardware Availability: [splitkb.com](https://splitkb.com).

# Using the software

[Set up QMK](https://docs.qmk.fm/#/getting_started_build_tools) first (no need to fork the project, one will not contribute using this repo). Then clone this folder into `qmk_firmware/keyboards`

    cd qmk_firmware/keyboards/
    git clone git@github.com:Totile/corne_reviewed.git

Then flash firmware to the controller (enter bootloader by clicking twice the reset button)

    qmk flash -kb corne_reviewed -km vf

# My addition

The base template of this folder is the one provided by Splitkb.

## Bootloader

The main modification were made to `rules.mk` to ensure compatibility with Caterina Bootloader of the promicro board

## Keymaps

- *totile_corne* and *totile_corne_mac*: unstable versions based on the Unicode features of QMK. This was not OS-agnostic and was hard to ship to Windows or Mac.
- *vf* (version finale): keymap using the US international layout to ensure basic French features (missigng the œ though). Current version to use.