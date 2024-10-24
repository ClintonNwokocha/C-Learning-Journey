#include <stdio.h>

int main(){

        int c;  // variable to hold current character input

        int tb = 0, bl = 0, nl = 0; //variable to hold count of tabs, newlines and blanks


        //loop through each charcter until EOF
        while ((c = getchar()) != EOF){
                if (c == '\n'){
                        ++nl;
                }
                else if (c == ' '){
                        ++bl;
                }
                else if (c == '\t'){
                        ++tb;
                }
        }
        printf("Newline = %d\nblanks = %d\ntabs = %d\n", nl, bl, tb);
        return (0);
}