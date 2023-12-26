#include <stdio.h>

int main() {
   int a[10],n,sum=0,i;
   printf("Enter size of array:");
   scanf("%d",&n);
   printf("\n Enter the elements:");
   for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("\n you have entered elements:");
   for(i = 0; i < n; i++) {
      sum = sum + a[i];
      printf("%d\n",a[i]);
   }
   printf("sum of array elements: %d", sum);   
   
   return 0;
}