#include <stdio.h>
int main() {
  int count = 0,n;
  printf("Enter an integer: ");
  scanf("%d", &n);

  do {
    n /= 10;
    ++count;
  } while (n != 0);

  printf("Number of digits: %d", count);
}
