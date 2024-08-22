#include <stdio.h>
#include <stdlib.h>

int main(){
    char *first;
    char *last;
    //allocating arrray size using malloc
    first = (char *)malloc(40 * sizeof(char)); 
    last = (char *)malloc(40 * sizeof(char));

    printf("Enter first name: \n");
    scanf("%s", first);

    printf("Enter last name: \n");
    scanf("%s", last);

    printf("Welcome %s %s \n", first,last);

    free(first);
    free(last);
    
    return 0;
}