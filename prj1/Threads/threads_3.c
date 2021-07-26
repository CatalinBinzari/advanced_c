#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>


void *calls(void *ptr) {
    printf("In function \n thread up = %ld\n", pthread_self());
    pthread_exit(NULL);
    return NULL;
}

int main() {
    pthread_t thread;
    pthread_create(&thread, NULL, calls, NULL);
    printf("In main \nthread id = %ld\n", thread);
    pthread_join(thread, NULL);
    return 0;

}