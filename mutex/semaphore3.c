#include <stdio.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <sys/types.h>

int main()
{
	int semid, key1, key2, nsem = 1;
	key1 = 0x30;
	key2 = 0x30;
	semid = semget((key_t)key1, nsem, IPC_CREAT | 0666);
	printf("Created semaphore with ID: %d\n", semid);
	semid = semget((key_t)key2, nsem, IPC_CREAT | 0666);
	printf("Created semaphore with ID: %d\n", semid);
}