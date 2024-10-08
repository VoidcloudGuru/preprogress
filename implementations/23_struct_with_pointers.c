#include <stdio.h>

struct snippet
{
    int chase;
};

int main()
{

    struct snippet *ptr;
    struct snippet ecom;

    ptr = &ecom;

    ecom.chase = 23;
    printf("%d\n", ecom.chase);

    (*ptr).chase = 15;
    printf("%d\n", (*ptr).chase);

    ptr->chase = 12; 
    printf("%d\n", ptr->chase);

    return 0;
}
