#ifndef PROC_H
#define PROC_H

typedef struct process_info {
    int pid;
    char name[256];
    int state;
} process_info_t;

void proc_int();
void list_processes();

#endif