# sndiomixer
A small mixer made in C for sndio
# Installation
## Prerequisites
What you'll need first:<br>
`tcc`
<br>
or any other C compiler(this guide is suited towards tcc)
<br>
to get tcc:
<br>
`doas pkg_add tcc`
## The actual installation
Once tcc is installed(or your compiler of choice, I just won't show that here), you do this:<br>
1. Download the file(don't do a linus moment)
2. Open a terminal
3. cd into the directory of the file(Example: `cd Downloads`)
4. once in the directory, compile the file: <br>
   `tcc FILENAME -o OUTPUT_FILENAME` <br>
   REPLACE FILENAME AND OUTPUT_FILENAME WITH RESPECTIVE NAMES<br>
   (OUTPUT_FILENAME can be whatever you want)<br>
   So, for example:<br>
   `tcc sndiomix.c -o main`<br>
5. Once that's done, what you do is:
   `doas mv OUTPUT_FILENAME /usr/local/bin`<br>
6. That's all! Now just open your terminal and type in `doas OUTPUT_FILENAME` in there, and you have a fully working sndio mixer. It may be very basic, but in my opinion it's superior than just doing `doas sndioctl output.level=0.2` or whatever.
# Closing notes
Don't do a linus moment and complain that this is hard. You chose sndio, it's your problem.
