#include<stdio.h>
#include<string.h>
int main(){
        char str[50],s1[23],rep_char,new_char;
        int i;
        printf("Enter name:");
        gets(str);
        printf("\n your name:");
        puts(str);

        printf("\n Enter character you want to replace ");
        fflush(stdin);
        scanf("%c",&rep_char);

        printf("\n Enter new character you want to add ");
        fflush(stdin);
        scanf("%c",&new_char);

        for(i=0;str[i]!='\n';i++){
            if(str[i] == rep_char){
                str[i] = new_char;
            }
        }
        printf("\n After replace name is.....");
        puts(str);


    return 0;
}