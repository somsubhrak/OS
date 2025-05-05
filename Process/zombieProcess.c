#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    
    if(fork()>0)
    {
        printf("Zombie Process\n");
        sleep(10);
    }
    return 0;
}