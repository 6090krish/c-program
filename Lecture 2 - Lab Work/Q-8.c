#include<stdio.h>

int main(){
    
    int i,j,k;

    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf(" %d",j);
            
        }
        for(k=4;k>=i;k--){
            printf("  ");
        }
        for(k=i;k<=4;k++){
            printf("  ");
        }
        for(j=i;j>=1;j--){
                printf(" %d",j);
        
        }
        printf("\n");
    }
      for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf(" %d",j);
            
        }
        for(k=4;k>=i;k--){
            printf("  ");
        }
        for(k=i;k<=4;k++){
            printf("  ");
        }
        for(j=i;j>=1;j--){
                printf(" %d",j);
        
        }
        printf("\n");
    }


    return 0;
}
