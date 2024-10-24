#include <stdio.h>

/* program that checks if character is EOF*/

int main(){
        
        int c;
        
        // Get the character
        c = getchar();

        // Start loop to check input
        while (1){
                // Print whether character is EOF or not
                printf("c != EOF: %d\n", c != EOF);
                
                // Use putchar to print character, if its not EOF
                if (c != EOF){
                        putchar(c);
                        putchar('\n');
                }                
                if (c == EOF){
                        break;

                
                }
                c = getchar(); //Read the next character
        }
        return (0);
}