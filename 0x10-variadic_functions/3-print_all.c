#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...) {
    va_list args;
    va_start(args, format);
    while (*format != '\0') {
        if (*format == 'd') {
            int number = va_arg(args, int);
            printf("%d ", number);
        } else if (*format == 'f') {
            double number = va_arg(args, double);
            printf("%f ", number);
        } else if (*format == 's') {
            char* string = va_arg(args, char*);
            printf("%s ", string);
        }
        format++;
    }
    va_end(args);
    printf("\n");
}

void some_function(int count, ...) {
    va_list args;
    va_start(args, count);
    const char* format = va_arg(args, char*);
    print_all(format, args);
    va_end(args);
}

int main() {
    some_function(4, "dfds", 1, 2.5, "Hello", "world");
    return 0;
}

