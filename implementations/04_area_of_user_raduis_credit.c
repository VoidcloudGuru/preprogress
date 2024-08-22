#include <stdio.h>
#define PIE 3.14

//prompt the user for the radius f the circle
int main(){
    float radius, Area;
    printf("Enter raduis of your circle: \n");
    scanf("%f", &radius);

    Area = PIE * radius * radius;
    printf("The area of your circle is %f \n", Area);
    
    return 0;
}