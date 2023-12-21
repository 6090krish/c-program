#include<stdio.h>
int main(){
    int r,n,rev=0,f;
    printf("Enter no:");
    scanf("%d",&n);
    f=n;
    while (n>0){
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    printf("\n Reverse no is %d",rev);
    if(f==rev){
        printf("\n It is Palindrom");
    }else {
        printf("\n It is not Palindrom");
    }
    return 0;
}