//
// Created by kushal on 10/6/15.
//

#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int get_parent(void) {
    if (fork() == 0) { /*This is the child process*/
        execve("child", NULL, NULL);
        exit(0);  /* Should never get here, terminate*/
    }
/* Parent code here*/
    printf("Process[%d]: Parent in execution ...\n", getpid());
    sleep(5);
    if (wait(NULL) > 0)  /* Child terminating*/
        printf("Process[%d]: Parent detects terminating child \n",
               getpid());
    printf("Process[%d]: Parent terminating ...\n", getpid());
    return 0;
}
