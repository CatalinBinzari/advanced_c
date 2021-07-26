#include<stdio.h>
#include<signal.h>
#include<stdlib.h>

void handler_dividebyzero(int signum);

int main(){
    int result = 0;
    int v1 = 1, v2 = 0;
    void (*sigHandlerReturn) (int);

    sigHandlerReturn = signal ( SIGFPE, handler_dividebyzero);

    if (sigHandlerReturn == SIG_ERR)
    {
        perror("Signal ERROR: ");
        return 1;
    }
}

void handler_dividebyzero(int signum) {
    if(signum == SIGFPE)
    {
        printf("Received SIGPFE, divide by zero exception");
        exit (0);
    } else
    {
        printf("Received signal: %d", signum);
        return;
    }
}