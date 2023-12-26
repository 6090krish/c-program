#include <stdio.h>

int main() {
   int a[10],n,sum,loop;
   float avg;
   printf("Enter size of array:");
   scanf("%d",&n);
   printf("\n Enter the elements:");
   for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
     }
   sum = avg = 0;
   
   for(loop = 0; loop < n; loop++) {
      sum = sum + a[loop];
   }
   
   avg = (float)sum / loop;
   printf("Average of array values is %.2f", avg);   
   
   return 0;
}