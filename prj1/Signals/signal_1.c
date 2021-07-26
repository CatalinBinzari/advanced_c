#include<stdio.h>
#include<signal.h>
#include<stdlib.h>

int main(){
    printf("Testing SIGSTOP\n");
    raise(SIGSTOP); //sigstop stops the program
    //fro mterminal use  kill -s SIGCONT 1559965
    //then programm continues
    printf("I am back\n");
    return 0;
}