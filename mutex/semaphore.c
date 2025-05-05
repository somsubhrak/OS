#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>

int main()
{
    int nsem, key;
    printf("Enter number of sub semaphores and key: ");
    scanf("%d %d", &nsem, &key);

    int semid=semget(key, nsem, 0666 | IPC_CREAT);

    if(semid!=-1)
        printf("\nSemaphore created!\nID: %d\nKey: %d\nSub semaphores: %d\n", semid, key, nsem);
    else
        perror("failed to create semaphore");
    return 0;
}
