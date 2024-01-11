#include<stdio.h>
int cube(int a){
    return a*a*a;
} 
void main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("\n Cube is %d",cube(n));
}