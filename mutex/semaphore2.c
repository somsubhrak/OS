#include <stdio.h>
#include <stdlib.h>
#include <sys/sem.h>
#include <sys/ipc.h>
#include <sys/types.h>

int main() {
	int semid, nsem = 0, key;
	printf("Enter key: ");
	scanf("%d", &key);
	semid = semget((key_t)key, nsem, IPC_CREAT | 0666);

    if(semid!=-1)
        printf("Created semaphore with id: %d\n", semid);
    else
        perror("failed to create semaphore");
    
    return 0;
}