#include <stdio.h>

// created struct
struct mate
{
    int num;
    char name;
    float avg;
};

int main()
{
    // structure variable of mate
    struct mate var;
    // assigning values to the members in the struct mate
    var.num = 23;
    var.name = 'J';
    var.avg = 12.3;

    // printing out of the values of the struct
    printf("This is the int %d, This is the char %c, This is the float %.1f\n", var.num, var.name, var.avg);
    return 0;
}
