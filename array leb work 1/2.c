#include <stdio.h>
int main()
{

	int Arr[] = { 1, 2, 3, 4, 5 , 6, 7, 8, 9};
	int length = sizeof(Arr) / sizeof(Arr[0]);

	printf("The length of the array is: %d\n", length);

	return 0;
}
