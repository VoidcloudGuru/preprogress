#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 20
int main()
{
    char *ptr;
    ptr = (char *)malloc(ARRAY_SIZE * sizeof(char));
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    else
    {
        printf("Memory allocation was successful\n");
    }
    free(ptr);
    return 0;
}