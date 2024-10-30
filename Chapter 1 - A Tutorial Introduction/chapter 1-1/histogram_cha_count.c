#include <stdio.h>

/* program to print a histogram of the frequencies of different characters in its input. */

#define MAX_CHAR 128                    // Total number of ASCII characters

int main()
{
        int c, i, j;                    // Variables for characte input, looping
        int char_freq[MAX_CHAR];               // Array to store frequency of each character

        // Initialize all frequencies to zero
        for (i=0; i<MAX_CHAR; i++)
        {
                char_freq[i] = 0;
        }

        while ((c = getchar()) != EOF)
        {
                if (c >= 0 && c <= MAX_CHAR)
                {
                        ++char_freq[c];
                }
        }
        printf("Character Frequency Histogram\n");
        printf("-----------------------------\n");
        for (i=0; i<MAX_CHAR; i++)
        {
                if (char_freq[i] > 0)
                {
                        if (i >= 32 && i<= 126)
                        {
                                printf(" '%c' | ", i);
                        }
                        else {
                                printf(" %3d | ", i);
                        }
                        for (j=0; j<char_freq[i]; j++)
                        {
                                putchar('*');
                        }
                        putchar('\n');
                }
        }
        return (0);
}