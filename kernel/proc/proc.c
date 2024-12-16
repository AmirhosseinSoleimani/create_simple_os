#include "proc.h"
#include "../include/utils.h"

#define MAX_PROCESSES 10

static process_info_t processes[MAX_PROCESSES];
static int process_count = 0;

void proc_int() {
    for(int i =0; i < MAX_PROCESSES; i++) {
        processes[i].pid = i + 1;
        sprinf(processes[i].name, "Process_%d", i + 1);
        processes[i].state = (i % 2 == 0) ? 1 : 0;
    }
    process_count = MAX_PROCESSES;
}

void list_processes() {
    print_string("PID\tName\t\tState\n");
    print_string("--------------------------------\n");
    for(int i = 0; i < process_count; i++) {
        print_string("%d\t%s\t\t%s\n",
         processes[i].pid,
         processes[i].name,
         (processes[i].state == 1) ? "Running" : "Waiting"
         );
    }
    
}