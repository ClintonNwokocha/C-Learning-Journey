#include <stdio.h>

#define IN 1                                    // inside a word
#define OUT 0                                   // outside  a word
#define MAX_WORD_LENGTH 15                      // Maximum character count of the program

int main()
{
        int c, nc, state, i, j;                 // variables: c = character input, nc = word count length,
                                                // state = track if inside or outside, i & j = loop iteration.
        int lengths[MAX_WORD_LENGTH + 1];       // Array to store the count of words for wach length up to MAX_WORD_LENGTH

        /* initialize array for word length counts */
        for (i=0; i<=MAX_WORD_LENGTH; i++)
        {
                lengths[i] = 0;
        }
        nc = 0;                                 // initialize current count
        state = OUT;                            // start in OUT state (outside a word)

        /* Read character from input until End-of-File */
        while ((c = getchar()) != EOF)
        {
                // Check if current character is a whitespace
                if (c == ' ' || c == '\n' || c == '\t') 
                {
                        if (state == IN)
                        {
                                if (nc <= MAX_WORD_LENGTH)
                                {
                                        ++lengths[nc];
                                }
                                else{
                                        ++lengths[MAX_WORD_LENGTH];
                                }
                                nc = 0;
                        }
                        state = OUT;
                }
                else{
                        state = IN;
                        ++nc;
                }
        }
        // Print the horizontal histogram
        printf("Horizontal Histogram of word lengths:\n");
        printf("--------------------------------------\n");
        for (i=1; i<=MAX_WORD_LENGTH; i++)
        {
                if (lengths[i] > 0)
                {
                        printf("%2d | ", i);
                        for (j=0; j<lengths[i]; j++)
                        {
                                putchar('*');
                        }
                        putchar('\n');
                }
        }
        return (0);
}