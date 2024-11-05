#include <stdio.h>

#define MAXLINE 1000                    // Maximum Line Length

/* define prototype */
int getline(char arr[], int lim);
void copy(char to[], char from[]);


int main()
{
        int len;                        // Holds Line Length
        int max;                        // Hold current Maximum Length
        char line[MAXLINE];             // hols the current line
        char longest[MAXLINE];          // Holds the longest line

        max = 0;

        while((len = getline(line, MAXLINE)) > 0)
        {
                printf("Length: %d\n", len);
                printf("Content: %s\n", line);


                if (len > max)
                {
                        max = len;
                        copy(longest, line);
                }
        }        
        if (max > 0)
        {
                printf("\nLongest Line Length: %d\n", max);
                printf("Longest Line Content: %s", longest);
        }
        return (0);
}

/* Getline Function; reads line, counts it, handles lines > than max and outputs line length */
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
                if (i < lim -1)
                {
                        s[i] = c;
                        ++i;
                }
                ++j;
        }

        s[i] = '\0';
        return j;
}


/* Copy function; Copies line from second mission to frst mission */
void copy(char to[], char from[])
{
        int i = 0;

        while((to[i] = from[i]) != '\0')
        {
                ++i;
        }
}