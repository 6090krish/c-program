#include<stdio.h>
int main(){

    int j;
    printf("\nEnter no.:");
    scanf("%d",&j);

    do{
        if(j%2 == 0){
            printf("\n %d",j);
        }
        j--;
    }
    while(j>=1);

    return 0;
}
