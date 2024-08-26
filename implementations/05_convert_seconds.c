#include <stdio.h>

int main(){
    int Seconds;
    int hours;
    int minutes;
    int seconds;

    printf("Enter number of seconds: \n");
    scanf("%d", &Seconds);
    printf("%d user input seconds\n", Seconds);

//converting the seconds to hours
    hours = Seconds / 3600; 
    //3600 number of seconds in an hour
    printf("%d is the number of hours\n", hours);

//converting the seconds to minutes
    minutes = (Seconds % 3600) / 60; 
    //modulus gives the remainder divided to get minutes
    printf("%d is the number of minutes\n", minutes);

// converting to seconds
    seconds = Seconds % 60;
    printf("%d is the number of seconds\n", seconds);

    return 0;
}