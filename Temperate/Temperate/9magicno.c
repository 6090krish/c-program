#include <stdio.h>
int main()
{
int num, tmp, rev = 0, Sum = 0 ;
printf("Enter a Number: \n");
scanf("%d", &num);
tmp = num;
while (tmp > 0)
{

Sum = Sum + tmp % 10; 
tmp = tmp / 10;
}
tmp = Sum; 
printf("\n The sum of the digits = %d", tmp);
while (tmp > 0)
{
rev = rev * 10 + tmp % 10;
tmp = tmp / 10;
}
printf("\n The reverse of the digits = %d", rev);
printf("\n The product of %d * %d = %d",Sum, rev, rev * Sum);
if (rev * Sum == num)
{
printf("\n %d is a Magic Number. ", num);
}
else
{
printf("\n %d is not a Magic Number. ", num);
}
return 0;
}