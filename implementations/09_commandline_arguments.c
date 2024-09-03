#include <stdio.h>

int main(int argc, char *argv[])
{
    int args_input = 3;
    // check if the arguments passed in are correct or not
    if (argc == args_input)
    {
        // argv[1] for the firstname and argv[2]for lastname
        printf("Hello, %s %s!\n", argv[1], argv[2]);
    }
    else if (argc > args_input)
    {
        printf("Error:Few arguments were passed in\n");
        printf("Usage:%s <first_name> <last_name>\n", argv[0]);
    }
    else if (argc > args_input)
    {
        printf("Error:Too many arguments were passed in\n");
        printf("Usage:%s <first_name> <last_name>\n", argv[0]);
    }
    else
    {
        printf("Nothing was input\n");
    }

    return 0;
}