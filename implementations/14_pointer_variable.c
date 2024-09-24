#include <stdio.h>

int main() {
  int num = 16;
  int *ptr = &num;
  
  printf("The value of our pointer is %p\n", ptr);

  return 0;
}