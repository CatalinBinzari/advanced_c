//alarm provides a mechanism for a process to intrerupt itself in the future
//alarm sets a timer
//process receives a signal - SIGALARM

// if we do not catch the process, SIGALARM is to terminate the process
// there is only one alarm check per process;
// the alarm wunction will return a value if another alarm has been previously set


#include<stdio.h>
#include<unistd.h>
#include<signal.h>

int main(void) {
    alarm(5);

    for (int i = 1; i < 10; i++){
        printf("%d\n", i);
        sleep(1);
    }
}