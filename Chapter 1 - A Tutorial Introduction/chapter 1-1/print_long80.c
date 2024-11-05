#include <stdio.h>

#define MAXLINE 1000                    // Maximum input line length
#define limit 80                        // Length threshold for printing lines


/* declaring prototype */
int getline(char arr[], int lim);
void copy(char to[], char from[]);

int main()
{       
        int len;
        char line[MAXLINE];
        
        while((len = getline(line, MAXLINE)) > 0)
        {
                if (len > limit)
                {
                        printf("%s", line);
                }
        }

        return (0);
}

/* Getline function; reads a line and returns its length */
int getline(char s[], int lim)
{
        int c, i, j;
        j = 0;

        for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        {
                if (i < lim - 1)
                {
                        s[i] = c;
                }
                ++j;
        }
        if (c == '\n')
        {
                s[i] = c;
                ++i;
        }
        ++j;
        

        s[i] = '\0';
        return j;
}