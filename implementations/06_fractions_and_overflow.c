#include <stdio.h>

int main(){
    int numerator;
    int denominator;

    printf("Enter a numerator:\n");
    scanf("%d", &numerator);

    printf("Enter a denominator:\n");
    scanf("%d", &denominator);

    if (numerator % denominator == 0) {
        printf("There is NOT a remainder\n");
    }else {
    printf("There is a remainder\n");
    }

    return 0;
}