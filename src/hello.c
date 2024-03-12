#include <stdio.h>

void print_message(char *message[]);

int main() {
    printf("Hello, world!\n");
    return 0;
}

void print_message(char *message[]) {
    printf("Your message: %s", *message);
}
