#include <unistd.h>
#include <stdio.h>
#include <string.h>

#define MAX_COUNT 10
#define BUF_SIZE 100

void main(void) {
    pid_t pid;
    char buf[BUF_SIZE];

    fork(); //the both programs will  start the execution just after next line, 
    // this fork call will make 2 identical copy of adress spaces(parent and child)
    // the values initialized before the call will have the same value in both adres spaces

    //so if parent changes var, it will affect only the parent but not the clild
    pid = getpid();
    for( int i = 1; i <= MAX_COUNT; i++)
    {
        sprintf(buf, "this line is from pid %d, value = %d\n", pid, i);
        write(1, buf, strlen(buf));
    }
}