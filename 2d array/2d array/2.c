#include<stdio.h>
int main(){
    int a[20][20],m,n,i,j;
    printf("Enter row and column:");
    scanf("%d %d",&m,&n);

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
        }
        printf("\n");
    }
    printf("\n Length of 2d array: %d\n",m*n);
    return 0;
}