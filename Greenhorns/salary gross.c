#include <stdio.h>

int main() {
    int sal=100,hra,da,ta,gross_sal;
    hra = sal*10/100;
    da = sal*5/100;
    ta = sal*8/100;
    gross_sal = sal+hra+da+ta;
    printf("/n gross_salary =%d",gross_sal);

    return 0;
}
