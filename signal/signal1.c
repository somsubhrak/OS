#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void intHandler(int signo)
{
    printf("Interrupt signal handled by child!\n");
}

void quitHandler(int signo)
{
    printf("Quit signal handled by child!\n");
}

void hupHandler(int signo)
{
    printf("Hangup signal handled by child!\n");
}

int main()
{
    int pid = fork();

    if(pid < 0)
    {
        printf("Child process cannot be created\n");
        exit(0);
    }
    else if (pid == 0)
    {
        // Register signal handlers only once
        signal(SIGINT, intHandler);
        signal(SIGQUIT, quitHandler);
        signal(SIGHUP, hupHandler);

        // Child process stays alive and processes signals
        while(1)
        {
            sleep(1); // Sleep to allow signal processing
        }
    }
    else
    {
        printf("PID: %d\n", pid);
        printf("Sending SIGINT signal\n");
        kill(pid, SIGINT);
        sleep(5);

        printf("Sending SIGQUIT signal\n");
        kill(pid, SIGQUIT);
        sleep(5);

        printf("Sending SIGHUP signal\n");
        kill(pid, SIGHUP);
        sleep(5);

        printf("Sending SIGSTOP signal\n");
        kill(pid, SIGSTOP);
    }
    return 0;
}
