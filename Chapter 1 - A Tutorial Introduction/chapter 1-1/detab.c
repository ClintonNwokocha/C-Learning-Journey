#include <stdio.h>

#define TABWIDTH 8 // Tab stop interval

int main(void)
{
        int c, col = 0; // current column position
        int spaces;

        while ((c = getchar()) != EOF)
        {
                if (c == '\t')
                {
                        spaces = TABWIDTH - (col % TABWIDTH);
                        for (int i = 0; i < spaces; ++i)
                        {
                                putchar(' ');
                                col++;
                        }
                }
                else {
                        putchar(c);
                        col++;
                        if (c == '\n')
                        {
                                col = 0;
                        }
                }
        }
        return (0);
}