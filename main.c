#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

void print_PCB()
{
    printf("\n PCB \t | \t");
    printf("PPID: %d \n", getppid());
    printf("\t \t PID: %d\n", getpid());
    printf("\t \t UID: %d\n", getuid());
    printf("\t \t GID: %d\n", getgid());
    
}

int main() {
    pid_t ret = fork();
    printf("fork() has returned: %d\n", ret);
    print_PCB();
    exit(EXIT_SUCCESS);
}