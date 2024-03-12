#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Person {
    char *name;
    int age;
    void (*greeting)();
} Person;

void say_english_greeting();
void say_spanish_greeting();

int main(int argc, char *argv[]) {
    // 1. Function pointer declaration
    void (*greeting)();

    // 2. Function pointer initialization
    if(argc > 1) {
        greeting = !strcmp("spanish", argv[1]) ? &say_spanish_greeting : &say_english_greeting;
    } else {
        printf("Please pass a greeting argument!");
        return 1;
    }

    // 3. Function pointer inside of structures
    Person tony = { "Tony", 48, greeting };

    tony.greeting();

    return 0;
}

void say_english_greeting() {
    printf("Hello!\n");
}

void say_spanish_greeting() {
    printf("Hola!\n");
}
