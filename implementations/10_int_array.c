#include <stdio.h>

int main()
{
    int my_arr[] = {1, 12, 3, 4, 6, 13, 16, 9, 8, 10};
    // divides total number of the size of the array by size of one element to give us no of elements
    int elements = sizeof(my_arr) / sizeof(my_arr[0]);
    printf("The array has %d elements\n", elements);
    return 0;
}