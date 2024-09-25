#include <stdio.h>

int main(){
    int variable = 23;
    int *ptr = &variable;

    printf("The value of the variable:%d\n", variable);//prints the value assigned to the variable
    printf("The value of the pointer to the int variable is:%d\n", ptr);
    //prints the value of the pointer which is the memory address of the variable
    printf("The memory address of the int variable is:%d\n", &variable);//prints the memory address of the variable
    printf("The value held at the memory location that the pointer is pointing to is: %d\n", *ptr);
    //prints out the value of the variable stored at *ptr which is a pointer to the int variable
    return 0;
}