#!/usr/bin/env python3
#
# This file echoes a bunch of colour codes to the
# terminal to demonstrate what's available.  Each
# line is the colour code of one forground colour,
# out of 17 (default + 16 escapes), followed by a
# test use of that colour on all nine background
# colours (default + 8 escapes).
#
# Inspired by http://tldp.org/HOWTO/Bash-Prompt-HOWTO/x329.html


def main():
    text = "gYW"
    
    print("\n         def     40m     41m     42m     43m     44m     45m     46m     47m")
    
    for fg_label in ["    m", "   1m", "  30m", "1;30m", "  31m", "1;31m", "  32m", "1;32m", "  33m", "1;33m", "  34m", "1;34m", "  35m", "1;35m", "  36m", "1;36m", "  37m", "1;37m"]:
        fg = fg_label.replace(" ", "")
        print(" {} \033[{}  {}  ".format(fg_label, fg, text), end="")
        for bg in ["40m", "41m", "42m", "43m", "44m", "45m", "46m", "47m"]:
            print("{} \033[{}\033[{}  {}  \033[0m".format("", fg, bg, text), end="")
        print()
    print()


if __name__ == '__main__':
    main()
