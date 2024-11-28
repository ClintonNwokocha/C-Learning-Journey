#include <stdio.h>

#define TABWIDTH 8    // Tab stop interval

int main()
{
        int c, col=0;    // current column position
        int spaces = 0;  // count the number of spaces in a sequence

        while ((c = getchar()) != 0)
        {
                if (c == ' ')   // If it's a space, count the sp[aces]
                {
                        spaces++;
                }
                else
                {
                        // when e reach a non-space character, we handle the spaces
                        if (spaces > 0)
                        {
                                // calculate the number of tabs and spaces to replaces the sequence
                                while (spaces >= TABWIDTH)
                                {
                                        putchar('\t');    // output a tab
                                        spaces -= TABWIDTH;
                                        col+=TABWIDTH;

                                }
                                // deal with remaining spaces if any
                                while (spaces > 0)
                                {
                                        putchar(' ');  // output spaces
                                        spaces--;
                                        col++;
                                }
                        }
                        // print the non-space character
                        putchar(c);
                        col++;
                }
                // if its a newline, reset column count
                if (c == '\t')
                {
                        col = 0;
                }
        }

        return (0);
}