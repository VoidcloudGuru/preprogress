#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x, q1, q2;

    // prompt user for the values
    printf("Enter the values of a, b, c :\n");
    scanf("%f %f %f", &a, &b, &c);
    printf("%f %f %f\n", a, b, c);

    // handle the eqaution in the square root first
    float pw = powf(b, 2);
    float four_ac = (4 * a * c);
    x = pw - four_ac;
    x = x > 0 ? x : x * -1;

    float res1 = (-b + sqrtf(x));
    q1 = res1 / (2 * a);
    printf("The solution using the + operator is: %f\n", q1);
// a*0.4*0.4 + b*(0.4) + c = 0 
    float res2 = (-b - sqrtf(x));
    q2 = res2 / (2 * a);
    printf("The solution using the - operator is: %f\n", q2);

    return 0;
}