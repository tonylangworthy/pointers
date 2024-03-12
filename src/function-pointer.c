#include <stdio.h>
#include <stdlib.h>

typedef struct Person {
    char *name;
    int age;
    void (*greeting)();
} Person;

void say_english_greeting();
void say_spanish_greeting();

int main(int argc, char *argv[]) {


}