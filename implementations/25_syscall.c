#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
    int filedescriptor;

    filedescriptor = open("testfile.txt", O_WRONLY | O_CREAT, S_IRWXU);
    if (filedescriptor < 0)
    {
        printf("The open operation failed...");
        return -1;
    }

    printf("The open operation succeeded!\n");

    int writertn;

    writertn = write(filedescriptor, "Writing test data to the file", 30);
    if (writertn != 30)
    {
        printf("The write operation failed...");
        return -1;
    }

    printf("The write operation succeeded!\n");


    if (close(filedescriptor < 0))
    {
        printf("Closing of file failed\n");
        return -1;
    }
    else
    {
        printf("Closing of file succeeded\n");
        return 0;
    }
}