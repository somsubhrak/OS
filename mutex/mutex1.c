#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <unistd.h>
#include <sys/sem.h>   
#include <sys/shm.h>   
#include <sys/msg.h>

int main()
{
    int semid, shmid, msgqid, key;
    key=(key_t) 0x20;
    semid=semget(key, 1, 0666 | IPC_CREAT);
    shmid=shmget(key, 1024, 0666 | IPC_CREAT);
    msgqid=msgget(key, 0666 | IPC_CREAT);

    if(semid!=-1)
        printf("\nSemaphore created %d", semid);
    else
        perror("semget");

    if(shmid!=-1)
        printf("\nShared memory segment created %d", shmid);
    else
        perror("shmget");

    if(msgqid!=-1)
        printf("\nMessage queue created %d", msgqid);
    else
        perror("msgget");

    return 0;
}
