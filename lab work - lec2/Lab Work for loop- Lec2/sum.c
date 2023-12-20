#include<stdio.h>
int main(){

    int i=1,n,sum=0;
    printf("\nEnter on.:");
    scanf("%d",&n);
    for(;i<=n;i++){
        sum+=i;
    }
      printf("\n Sum is %d",sum);

    return 0;
}

