#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        printf("This is the child process with PID: %d\n", getpid());
    }
    else if (pid > 0) {
        printf("This is the parent process with PID: %d\n", getpid());
    }
    else {
        printf("Fork failed!\n");
    }

    return 0;
}
