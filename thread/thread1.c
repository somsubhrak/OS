#include<stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *print_msg(void *ptr)
{
    char *msg= (char*) ptr;
    printf("%s\n",msg);
    return NULL;
}

int main()
{
    pthread_t thread1, thread2;
    char *msg1 = "Thread 1", *msg2 = "Thread 2";
    int res1= pthread_create(&thread1, NULL, print_msg, (void *)msg1);
    int res2= pthread_create(&thread2, NULL, print_msg, (void *)msg2);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    printf("\nThread 1 returns %d\nThread 2 returns %d", res1, res2);
    return 0;
}