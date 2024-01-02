#include<stdio.h>
int main(){
    int a[20][20],m,n,i,j,sum=0;
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
    for(i=0;i<m;i++){
        sum=0;
        for(j=0;j<n;j++){
             sum+=a[j][i];
        }
        printf("\n");
         printf("\n column-elemnts sum of array element:%d",sum);

    }

    return 0;
}