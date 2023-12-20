#include <stdio.h>
int main(){

    int i=1,f=1,n;
    printf("\n Enter no. :");
    scanf("%d",&n);

    do{
        f*=i;
        i++;
    }
    while(i<=n);
    printf("\nfactorial is %d",f);
    return 0;
}