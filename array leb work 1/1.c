#include <stdio.h>

int main() {

  int a[50],n;
  printf("Enter size of array:");
  scanf("%d",&n);
  printf("\n Enter the elements:");
  for(int i = 0; i < n; i++) {
     scanf("%d", &a[i]);
  }
     printf("elements in arraay: ");

  for(int i = 0; i < n; i++) {
     printf("%d ", a[i]);
  }
  return 0;
}
