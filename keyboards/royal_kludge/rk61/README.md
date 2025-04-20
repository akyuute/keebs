# Royal Kludge RK61

QMK firmware with a custom Vim-like layout for the wired RGB Royal Kludge
RK61 keyboard, PID 6461, based on [yutaoz/better-rk61-qmk](https://github.com/yutaoz/better-rk61-qmk).

I use this custom layout for my infernal Windows PC at work. It's very
complicated and specific to my needs, so you may want to use your own.
It features three text layers with arrow keys for Vim-like movement,
modifiers and other useful keys in convenient places, a layer for mouse
movement and an entire numpad layer.

Please follow [these instructions](https://docs.qmk.fm/newbs) to set up
your QMK environment.

When you're ready to compile, copy the `royal_kludge` folder into
`qmk_firmware/keyboards/`.

Go to the qmk_firmware directory and run `$ qmk compile -kb
royal_kludge/rk61 -km vimwin`.

Press the DFU button underneath the spacebar, then
run `$ qmk flash royal_kludge_rk61_custom.bin`.

Replug the keyboard and you'll be ready to go! (Maybe...)

I don't know much at all about microcontrollers and pinouts, so I'm not
the person to ask for help with implementing RGB and other features.
I just found yutaoz's code for my version of this
keyboard and began making my preferred layout.

![The base layer of my custom VimWin layout](/keymaps/vimwin/img/rk61_vimwin_layer0.png)
![The VimWin layout's numbers and symbols layer](/keymaps/vimwin/img/rk61_vimwin_layer1.png)
![The VimWin layout's text movement layer](/keymaps/vimwin/img/rk61_vimwin_layer2.png)
![The VimWin layout's mouse movement layer](/keymaps/vimwin/img/rk61_vimwin_layer3.png)
![The VimWin layout's numpad layer](/keymaps/vimwin/img/rk61_vimwin_layer4.png)
![The VimWin layout's unfinished special functions layer](/keymaps/vimwin/img/rk61_vimwin_layer5.png)

