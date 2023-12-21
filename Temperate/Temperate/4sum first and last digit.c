#include<stdio.h>
int main(){
    int n,count=0,last,r,sum=0,ans;
    printf("Enter no:");
    scanf("%d",&n);
    last = n%10;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        sum+=r;
        count++;
    }
    ans=r+last;
    printf("\n sum of first and last degit:%d",ans);
    return 0;
}