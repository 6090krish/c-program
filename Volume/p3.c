#include <stdio.h>

// Define an enumeration for days of the week
enum Days {
    SUNDAY = 0,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    // Declare a variable of type enum Days
    enum Days day = WEDNESDAY;  // You can set any day you want

    // Print the integer value of the day of the week
    printf("Integer value of %d is %d\n", day, (int)day);

    return 0;
}