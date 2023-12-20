#include<stdio.h>
int main(){

    int j;
    printf("\nEnter no.:");
    scanf("%d",&j);
    for(;j>=1;j--){
        if(j%2 == 0){
            printf("\n %d",j);
        }
    }

    return 0;
}
