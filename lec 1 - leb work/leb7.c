#include<stdio.h>
int main(){
    int i=1,n,year=2000;
    printf("\n Enter no:");
    scanf("%d",&n);
    while (year<=3000)
    {
        if(year%4==0){
            printf("\n leap year -%d",year);
        }
        year++;
    }
    return 0;
    
}