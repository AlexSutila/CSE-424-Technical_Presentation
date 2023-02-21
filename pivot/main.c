#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main() {

    char buf[0x50];

    printf("puts: %p\n", puts);
    printf("buf:  %p\n", buf);

    read(0, buf, 0x68);
    puts(buf);

    puts("Goodbye");
    return 0;
}

