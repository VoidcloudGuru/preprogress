#include <stdio.h>
#include <stdlib.h>

int main(){
    char first[40];
    char last[40];

    printf("Enter first name: \n");
    scanf("%s", first);

    printf("Enter last name: \n");
    scanf("%s", last);

    printf("Welcome %s %s \n", first,last);
    
    return 0;
}