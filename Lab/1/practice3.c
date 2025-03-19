#include <stdio.h>
#include <stdint.h>
#include <time.h>

#define PRINT_BYTE(type) printf("Size of " #type ": %zu\n", sizeof(type))

int main() {
    PRINT_BYTE(char);
    PRINT_BYTE(short);
    PRINT_BYTE(short int);
    PRINT_BYTE(int);
    PRINT_BYTE(long int);
    PRINT_BYTE(unsigned int);
    PRINT_BYTE(void *);
    PRINT_BYTE(size_t);
    PRINT_BYTE(float);
    PRINT_BYTE(double);
    PRINT_BYTE(int8_t);
    PRINT_BYTE(int16_t);
    PRINT_BYTE(int32_t);
    PRINT_BYTE(int64_t);
    PRINT_BYTE(time_t);
    PRINT_BYTE(clock_t);
    PRINT_BYTE(struct tm);
    PRINT_BYTE(NULL);
    PRINT_BYTE(struct { int a; short b; });

    return 0;
}

// use gcc -Wpedantic -Wall -Wextra -Wvla -Werror -std=c11 -m32 -o sizes32 practice3.c
// use gcc -Wpedantic -Wall -Wextra -Wvla -Werror -std=c11 -m64 -o sizes64 practice3.c