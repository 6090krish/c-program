#include<stdio.h>

int main(){
    int i=2000;

    do{
        if(i%4==0){
            printf("\n %d",i);
        }
        i++;
    }
    while (i<=3000);     
      


    return 0;
}