#include<stdio.h>
int main(){
    int a[20][20],m,n,i,j,diagonal=0;
    printf("Enter row and column:");
    scanf("%d %d",&m,&n);
    if(m==n){
    printf("Eneter the array of elements:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n enertd array: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
            if(i==j){
                diagonal = diagonal+a[i][j];
            }
        }
        printf("\n");
    }
    printf("\n diagonal sum of array element:%d",diagonal);
    } else{
        printf("\n Eneter sam row and column...");
    }
    return 0;
}