#include <stdio.h>

#define MAXLINE 1000

// defining prototypes
int my_getline(char s[], int lim);
void reverse_string(char s[]);

int main()
{
        int len;
        char line[MAXLINE];

        printf("Enter some lines of text (Ctrl + C to stop:)\n");
        while ((len = my_getline(line, MAXLINE)) > 0)
        {
                reverse_string(line);                                           // Reverse String
                printf("Reversed Line: %s", line);                               // Print String
                printf("Enter some lines of text (Ctrl + C to stop:)\n");
        }
        return (0);
}


// Read line into output
int my_getline(char s[], int lim)
{
        int i, c;

        for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        {
                s[i] = c;
        }
        if (c == '\n')
        {
                s[i] = c;
                ++i;
        }
        s[i] = '\0';
        return (i);
}

// Reverse String function
void reverse_string(char s[])
{
        int i, j;
        char temp;

        for (i = 0; s[i] != '\0'; ++i);

        if (i > 1 && s[i - 1] == '\n')
        {
                i--;
        }

        for (j = 0, --i; j < i; ++j, --i)
        {
                temp = s[j];
                s[j] = s[i];
                s[i] = temp;
        }
}