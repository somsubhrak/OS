#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    int pid = fork();
    if(pid == 0)
    {
        printf("Child process with ID= %d\n",getpid());
        printf("Child's Parent process ID= %d\n",getppid());
        sleep(10);
        printf("Child process with ID= %d\n",getpid());
        printf("Orphans's Parent process ID= %d\n",getppid());
    }
    else
     {  
        printf("Parent process with ID= %d\n",getpid());
        printf("Parent's parent process with ID= %d\n",getppid());
     }
    
    return 0;
}