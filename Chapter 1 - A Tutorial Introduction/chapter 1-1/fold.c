#include <stdio.h>

#define MAXLINE 1000
#define MAXCOL 20

int main()
{
        int c, i = 0;
        int last_space = -1;
        int col = 0;
        char line[MAXLINE];

        while ((c = getchar()) != EOF)
        {
                // only accept printable ASCII chars & newline
                if (c >= 32 && c <= 127 || c == '\n')
                {
                        
                        if (c == '\n')
                        {
                                // null terminate
                                line[i] = '\0';

                                // process the entire line
                                int start = 0;
                                int line_length = i;

                                // reset line space tracker for each segment
                                while (start < line_length)
                                {
                                        last_space = -1;
                                        col = 0;

                                        // find potential breakpoint wit MAXCOL
                                        for (int j = start; j < line_length && col < MAXCOL; j++)
                                        {
                                                if (line[j] == ' ' || line[j] == '\t')
                                                {
                                                        last_space = j;
                                                }
                                                col++;
                                        }
                                        // determine where to break the line
                                        int break_point;
                                        if (last_space != -1 && last_space > start)
                                        {
                                                break_point  = last_space;
                                        }
                                        else 
                                        {
                                                break_point = start + MAXCOL - 1;
                                        }

                                        // printing

                                        for (int j = start; j <= break_point; j++)
                                        {
                                                putchar(line[j]);
                                        }
                                        putchar('\n');

                                        // move start to next segment

                                        start = break_point + 1;

                                        // skip leading spaces in next segment

                                        while (start < line_length && (line[start] == ' ' || line[start] == '\t'))
                                        {
                                                start++;
                                        }
                                }
                                // reset for next line
                                i = 0;
                        }
                        else 
                        {
                                if (i < MAXLINE - 1)
                                {
                                        line[i++] = c;
                                }
                        }
                }
        }
}