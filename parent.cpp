//
// Created by kushal on 10/6/15.
//

#include "parent.h"

hello::parent::parent() {
    name = "Parent";
    pid = getpid();
    ppid = getppid();
}

hello::parent::parent(std::string name, int pid, int ppid) {
    this->name = name;
    this->pid = pid;
    this->ppid = ppid;
}
