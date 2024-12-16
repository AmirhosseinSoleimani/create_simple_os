#include "proc/proc.h"
#include "include/utils.h"

void kernel_main() {
    proc_int();
    print_string("Initializing /proc....\n");
    list_processes();
}
