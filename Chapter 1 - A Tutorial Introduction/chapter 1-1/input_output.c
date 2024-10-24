#include <stdio.h>

// program to copy its input to output, replacing each string of one or more blanks by a single blank

int main(){

        int c;
        int last_c = ' '; // initializ to space to handle leading spaces

        while ((c = getchar()) != EOF){
                if (c == ' '){
                        if (last_c != ' '){
                                putchar(c);
                        }
                }
                else {
                        putchar(c);
                }
                last_c = c;
        }
        return (0);
}