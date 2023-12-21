// A to Z print

#include <stdio.h>

int main()
{
    char ch = 'a';

    printf("Alphabets from a - z are: \n");
    
    do{
        printf("%c\n", ch);
        ch++;
    }
    while(ch<='z');

    return 0;
}