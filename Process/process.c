#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    int pid = fork();
    if(pid > 0)
        printf("Parent process with ID= %d",getppid());
    else if(pid == 0)
        printf("\nChild process with ID= %d",getpid());
    else
        printf("Fork failed");
    
    return 0;
}