// Author: Peter Membrey
// Date: 30/05/2015
// Very simple application to get us started!

/*
 * Note: This approach works because of the way
 * ASCII lays out the character set - this will
 * work with most text, but be warned about UTF-8
 * or non ASCII characters..
 */


#include <stdio.h>

char c;

int main() {
    do {
        // Read a character from stdin
        c = fgetc(stdin);
        // End of file? Nothing left to read...
        if (feof(stdin)) {
            // Exit loop
            break;
        }

        // Is the character lower case (ascii 97-122)?
        if ((c >= 'a') && (c <= 'z')) {
            // Yes, let's rotate it right 13
            c = (c-97+13)%26+97;
        }

        // Is the character upper case (ascii 65-90)?
        if ((c >= 'A') && (c <= 'Z')) {
            // Yes, let's rotate it right 13
            c = (c-65+13)%26+65;
        }

        // Print the character to stdout (default)
        printf("%c", c);
    } while (1);
    // Exit cleanly
    return 0;

}

