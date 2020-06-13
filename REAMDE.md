# dotfiles
Don't expect order and functionality. Most things don't work but I'm learning anyway.

[alt text something](https://raw.githubusercontent.com/amiller361/dotfiles/master/screenshot.png) <br/>
### xfce4-files
I was using XFCE for a bit, but I switched to i3-gaps. Most of the config files are the same but obviously there are differences. Keeping it here just in case.

### i3-files
Some differences from the xfce files, notably switching the terminal to [Alacritty](https://github.com/alacritty/alacritty) and using [ranger](https://github.com/ranger/ranger) and [zathura](https://aur.archlinux.org/packages/zathura-git/).

### alacritty 
Pretty neat terminal emulator. I don't know enough about anything to make a judgment, I'm just trying it out. 

### cava
A really cool visualizer I like to use with ncmpcpp. You can get it from [here](https://github.com/karlstav/cava). I'm still figuring out the ALSA/PulseAudio stuff but my current config accepts `fifo` from mpd/ncmpcpp. I had an issue with the colors and I still don't think I've sorted the transparency issue, but eh...what can ya do.

### mpd
Requires some finagling. My music library is on a drive attached to my RPi, and while I'm sure there's a much better way to handle that, I currently just mount it to my local `~/Music` folder and point it there. Probably a lot of nonsense in the config I could get rid of too, but whatever.

### ncmpcpp
For real, I love this little thing. The only issue I'm having with it that I can't quite figure out is that sometimes if I exit or resize the window, the terminal reverts back to the basic colorscheme which is NOT the one configured by [pywal](https://github.com/dylanaraps/pywal). I don't know how to troubleshoot that or fix it so whatever.

### neofetch
Pretty basic, I don't think I've changed too much about it. Displays system information and it looks nice.

### polybar
This is an ugly work in progress, but I'm getting there. I didn't like the i3 status bar, and initially I was trying to wean myself off of the XFCE4 whisker menu (even though, I can't lie, that's a great launcher) while simultaneously moving away from conky on my laptop since I only have a single screen. Dunno if I'll do the same for my desktop, though that conky script will require an overhaul since the animations broke.

### ranger
Didn't really change anything here, but just in case I do I like to have backup.

### wal
The pywal cache. 

# Laptop setup
- Lenova Ideapad FLEX 4-1470. It's old, it's loud, and apparently has two GPUs, according to neofetch. 
- Manjaro 5.4.43
- Gross I dual boot windows but I have music software I don't know how to use otherwise
- i3-gaps is my main WM, though I was using the XFWM. 
- I mostly use nano for terminal text editing, but my [buddy](https://github.com/d-huck) says I should learn vim, so I'm workingon that.
- My main text editor though is Atom. I do most of my coding there. Apparently it has LaTeX/zathura support so maybe I can move from Overleaf to that...

# Desktop setup
This needs to be updated, but I can't access it because it's at school and quarantine fml...
- Fedora 32
- It runs Gnome, but depending on how comfortable I get with i3 I might switch over.

# To-Do
A running list of things to take care of
- [ ] Figure out the ncmpcpp/terminal color reversion issue
- [ ] Figure out Rofi and use that instead of `dmenu` 
- [ ] Add a VPN option to Polybar (I use the PIA client)
- [ ] Be better at things
- [ ] Not get distracted by all of this and focus on my PhD...

