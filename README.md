# Color
A simple way to manage ANSI escape sequences

Installation
---

Compile the program with `cc -Os color.c -o color`

Move it somewhere on your PATH (I recommend using `/usr/local/bin/`)

Done

Usage
---

`color [color/attribute name]; command to colorize`

That is it

Colors supported
---

Check the color.c file for that, it has a list of all the possible arguments that you can give it.

Adding more stuff
---

Adding more escape sequences is very easy, just copy a line from the command list and change it as required, if you found an interesting one or just want to expand the program, you can open a pull request or an issue.
