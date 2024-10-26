#include <stdio.h>

/* program that prints its input one word per line */
#define IN 1 // constant to show we are currently in a word
#define OUT 0 // constant to show we are out of a word

int main() {

        int c, state;
        state = OUT;

        while ((c = getchar()) != EOF) {
                if (c == ' ' || c == '\n' || c == '\t') {
                        if (state == IN) {
                                putchar('\n');
                                state = OUT;
                        }
                        } else {
                                if (state == OUT){
                                        state = IN;
                                }
                                putchar(c);
                }
        }
        return (0);
}