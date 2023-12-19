#include<stdio.h>
int main(){
    int i=1,n;
    printf("\n Enter no:");
    scanf("%d" ,&n);
    while (n>=i){
        if(n%2==0){
            printf("\n Even No -- %d ",n);
        }
        n--;
    }
    return 0;
    
}