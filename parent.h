//
// Created by kushal on 10/6/15.
//

#ifndef HELLO_PARENT_H
#define HELLO_PARENT_H

#include <bits/stringfwd.h>
#include <bits/basic_string.h>
#include <unistd.h>

namespace hello {
    class parent {
        std::string name;
        int pid;
        int ppid;
    public:
        parent();

        parent(std::string name, int pid, int ppid);

        std::string getname() { return name; }

        int getpid() { return pid; }

        int getppid() { return ppid; }

    };
}

#endif //HELLO_PARENT_H
