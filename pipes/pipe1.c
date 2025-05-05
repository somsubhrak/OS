#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
    int p[2], pid;
    char writeMsg[2][20] = {"Hi", "Hello"}, readMsg[20];
    pipe(p);
    pid=fork();

    if(pid==0)
    {
        nice(10);
        close(p[1]);
        read(p[0], readMsg, sizeof(readMsg));
        printf("Child reading Msg1 from Pipe: %s\n", readMsg);
        read(p[0], readMsg, sizeof(readMsg));
        printf("Child reading Msg2 from Pipe: %s\n", readMsg);
        close(p[0]);
    }
    else
    {
        nice(-10);
        close(p[0]);
        printf("Parent writing Msg1 to Pipe: %s\n", writeMsg[0]);
        write(p[1], writeMsg[0], sizeof(writeMsg[0]));
        printf("Parent writing Msg2 to Pipe: %s\n", writeMsg[1]);
        write(p[1], writeMsg[1], sizeof(writeMsg[1]));
        close(p[1]);
    }
}