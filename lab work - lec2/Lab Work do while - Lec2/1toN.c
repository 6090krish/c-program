#include<stdio.h>
int main(){

    int i=1,n;
    printf("\nEnter on.:");
    scanf("%d",&n);

    do{
        printf("\n %d",i);
        i++;
    }
    while(i<=n);

    return 0;
}
