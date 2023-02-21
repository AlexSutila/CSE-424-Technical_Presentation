#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void gadgets() {
    __asm__(
        "pop rdi ; ret\n"
        "pop rsi ; ret\n"
        "pop rdx ; ret\n"
    );
}

int main() {
    puts("Hello");
    char buf[0x50];
    read(0, buf, 0x1000);
    return 0;
}

