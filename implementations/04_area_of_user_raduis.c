#include <stdio.h>

//prompt the user for the radius f the circle
int main(){
    float radius, Area;
    printf("Enter raduis of your circle: \n");
    scanf("%f", &radius);

    Area = 3.14 * radius * radius;
    printf("The area of your circle is %f \n", Area);
    
    return 0;
}