#include <unistd.h>

#define putchar(x) write(1, chardup(x), 1)

char* chardup(const char c) {
    static char buf[2];
    char *p = buf;
    *p++ = c;
    *p-- = 0;
    return buf;
}

unsigned int strlen(const char *str) {
    unsigned int length = 0;
    while (*str) {
        length++;
        str++;
    }
    return length;
}


int puts(const char *str) {
    unsigned int n = strlen(str);
    if (n < 1) return -1;
    return write(1, str, n);
}


int main() {
    char *name = "Hello World";
    puts(name);
    return 0;
}
