#include "utils.h"
#include <stdarg.h>

void print_string(const char *format,...) {
    va_list args;
    var_statrt(args, format);
    char buffer[1024];
    vsprintf(buffer, format, args);

    for(char *c = buffer; *c != '\0'; c++) {
        putchar(*c);
    }

}