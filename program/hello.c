#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc >= 2) {
        printf("Hello, %s\n", argv[1]);
    } else {
        printf("Usage: %s <input>\n", argv[0]);
    }

    return 0;
}

