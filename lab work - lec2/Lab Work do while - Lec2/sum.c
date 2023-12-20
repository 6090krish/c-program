#include<stdio.h>
int main(){

    int i=1,n,sum=0;
    printf("\nEnter on.:");
    scanf("%d",&n);

    do{
        sum+=i;
        i++;
    }
    while(i<=n);
      printf("\n Sum is %d",sum);

    return 0;
}

