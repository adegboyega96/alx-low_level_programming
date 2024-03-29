#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
}
