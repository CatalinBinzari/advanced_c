#include <unistd.h>
#include <signal.h>
#include <string.h>
#include <stdio.h>

static void hdl (int sig, siginfo_t *siginfo, void *context) {
    printf ("Sending PID: %ld, UID: %ld\n", (long)siginfo->si_pid, (long)siginfo->si_uid);
}

int main (int argc, char *argv[]) {
    struct sigaction act;

    memset (&act, '\0', sizeof(act));

    //use sa_sigaction because we have 2 aditional args in function hdl()
    act.sa_sigaction = &hdl;

    //the sa_siginfo flag tells sigaction to use sa_sigaction    
    act.sa_flags = SA_SIGINFO;

    if(sigaction(SIGTERM, &act, NULL) < 0) {
        perror("sigaction");
        return 1;
    }

    while (1)
    {
        sleep (3);
    }
    
    return 0;
}