#include<stdio.h>
int main(){
    int a[20][20],m,n,i,j,anti_diag=0,t;
    printf("Enter row and column:");
    scanf("%d %d",&m,&n);
    if(m==n){
    printf("Eneter the array of elements:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    t= m-1;
    printf("\n enertd array: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
            if(i==j || i+j==t ){
                anti_diag = anti_diag+a[i][j];
            }
        }
        printf("\n");
    }
    printf("\n diagonal sum of array element:%d",anti_diag);
    } else{
        printf("\n Eneter sam row and column...");
    }
    return 0;
}