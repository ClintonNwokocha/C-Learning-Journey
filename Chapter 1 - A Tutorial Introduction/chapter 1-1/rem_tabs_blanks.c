#include <stdio.h>

#define MAXLINE 1000

// Function Prototypes
int my_getline(char s[], int lim);
void remove_trailing_whitespace(char s[]);
void reduce_multiple_space(char s[]);
int is_blank(char s[]);

int main()
{
        int len;
        char line[MAXLINE];

        printf("Enter some lines of text (Ctrl + c to stop):\n");

        while ((len = my_getline(line, MAXLINE)) > 0)
        {
                remove_trailing_whitespace(line);               // Remove trailing whitespaces
                reduce_multiple_space(line);                    // Reduce multiple spaces
                if (!is_blank(line))                            // Check if line is blank
                {
                        printf("Cleaned line: %s\n", line);     // Output only cleaned line
                }
                
        }
        return (0);
}

// Reads line into output
int my_getline(char s[], int lim)
{
        int c, i;

        for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        {
                s[i] = c;
        }
        if (c == '\n')
        {
                s[i] = c;
                ++i;
        }
        s[i] ='\0';             // Null terminate string
        return (i);
}


// Removes trailing spaces, tabs, and newlines
void remove_trailing_whitespace(char s[])
{
        int i;

        for (i = 0; s[i] != '\0'; ++i);
        if (i > 0)
        {
                --i;
        }
        
        while (i >= 0 && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
        {
                s[i] = '\0';
                --i;
        }
}


// Reduces multiple spaces between words to a single space
void reduce_multiple_space(char s[])
{
        int i, j;
        int in_space= 0;

        for (i = 0, j = 0; s[i] != '\0'; ++i)
        {
                if (s[i] != ' ')
                {
                        s[j++] = s[i];
                        in_space = 0;
                }
                else if (!in_space)
                {
                        s[j++]  = s[i];
                        in_space = 1;
                }
        }
        s[j] = '\0';
}


// Check if a string is blank
int is_blank(char s[])
{
        int i;

        for (i = 0; s[i] != '\0'; ++i)
        {
                if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
                {
                        return 0;
                }
        }
        return 1;
}