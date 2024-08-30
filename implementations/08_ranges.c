#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number between 1 and 500:\n");
    scanf("%d", &num);

    if (num >= 1 && num <= 100)
    {
        printf("Your number is between 1 and 100\n");
    }
    else if (num >= 101 && num <= 200)
    {
        printf("Your number is bwtween 101 and 200\n");
    }
    else if (num >= 201 && num <= 300)
    {
        printf("Your number is between 201 and 300\n");
    }
    else if (num >= 301 && num <= 400)
    {
        printf("Your number is between 301 and 400\n");
    }
    else if (num >= 401 && num <= 500)
    {
        printf("Your number is between 401 and 500\n");
    }
    else
    {
        printf("The number is not in any of the ranges\n");
    }
    return 0;
}