//
// Created by kushal on 10/6/15.
//

#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int get_child(void) {
/* The child process's new program
	This program replaces the parent's program */
    printf("Process[%d]: child in execution ...\n", getpid());
    sleep(1);
    printf("Process[%d]: child terminating ...\n", getpid());
    return 0;
}
