#include<stdio.h>
int main(){
    int i=1,n,count;
    printf("Enter no:");
    scanf("%d",&n);
    while (i<=n)
    {
        if (n%i==0)
        {
            count++;
        }
        i++;
    }
    if (count<=2) {
        printf("\n It is prime no");
    } else
    {
        printf("\n It is not prime no");
    }
    return 0;
}