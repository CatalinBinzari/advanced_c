// pthreads API threads can be grouped in 3 major categories
// 1. thread management 
// 2. synchronization

#include <stdio.h>
#include <pthread.h>

void * hello_fun() {
    printf("Hello world\n");
    // sleep(10);
    return NULL;
}

int main(int argc, char *argv[]) {
    pthread_t thread;
    pthread_create(&thread, NULL, hello_fun, NULL);
    pthread_join(thread, NULL); //wait until its finished
    pthread_exit(NULL);
    // sleep(10);
    return 0;
}