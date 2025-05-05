#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    fork();
    fork();
    fork();
    printf("Process Id: %d Parent Process ID: %d \n", getpid(), getppid());
    
    return 0;
}