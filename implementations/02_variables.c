#include <stdio.h>
#include <stdlib.h>

//initialising the variables
int mynum;
float myflo;
char hello;

int main(){
//assigning values to the variables
int mynum = 20;
float myflo = 20.15;
char hello[20] = "Hello World!";

printf("%d is an integer!\n", mynum);
printf("%f is a float\n", myflo);
printf("%s is a char\n", hello);

    return 0;
}