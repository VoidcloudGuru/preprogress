#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <dlfcn.h>
#include <fcntl.h>
#include <string.h>

ssize_t write(int fildes, const void *buf, size_t nbytes)
{
    ssize_t (*new_write)(int fildes, const void *buf, size_t nbytes);
    new_write = dlsym(RTLD_NEXT, "write");

    int result;
    if (strcmp(buf, "Hello World!\n") == 0)
    {
        const char *new_buf = "Goodbye, cruel world!\n";
        result = new_write(fildes, new_buf, strlen(new_buf));
    }
    else
    {
        result = new_write(fildes,buf,nbytes);
    }
    return result;
}