#include<stdio.h>
int main(){
    int a[20][20],m,n,i,j,sum=0,t;
    float avg;
    printf("Enter row and column:");
    scanf("%d %d",&m,&n);
    t = m+n;
    printf("Eneter the array of elements:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n enertd array: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            sum += a[i][j];
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    avg = (float)sum/t;
    printf("\n average of array element:%.2f",avg);
    return 0;
}