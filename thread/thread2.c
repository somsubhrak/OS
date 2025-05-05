#include<stdio.h>
#include <stdlib.h>
#include <pthread.h>
#define NUM 4

void *print_msg(void *ptr)
{
    int threadNum= *((int*) ptr);
    printf("Thread %d running\n", threadNum);
    return NULL;
}

int main()
{
    pthread_t thread[NUM];
    int args[NUM];
    for(int i=0;i<NUM;i++)
    {
        args[i]=i;    
        pthread_create(&thread[i], NULL, print_msg, &args[i]);
    }
    for(int i=0;i<NUM;i++)
    pthread_join(thread[i], NULL);
    return 0;
}