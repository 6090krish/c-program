#include<stdio.h>
int divided(int a){
    if(a%3==0 && a%5==0){
        printf("\n divcible");
    }else{
        printf("\n not divcible");

    }
} 
void main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    divided(n);
}