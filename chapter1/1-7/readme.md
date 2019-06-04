"Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank."

20190603: A `while` loop that gets characters, and while the character is not equal to EOF, spits them right back up. Tracks prev and current characters, and if previous was a blank, don't print it. 

EOF is asserted to be -1 at the start, as it seems to be from the standard library.

EOF is sent by the input sequence of: Enter, then CTRL+D or CTRL+D twice in sequence.

Run the compiled executable, type in a string of characters, and press Enter - the output should be echoed with any consecutive spaces stripped out.

