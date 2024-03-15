#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define ARRAY_SIZE 4

typedef struct Person {
    char *name;
    int age;
    int id;
} Person;

int main(int argc, char *argv[]) {
    int numbers[] = { 1, 2, 3, 4 };

    const double floats[] = { 1.99, 4.58, 3.14, 5.88 };

    const char name[] = "Tony";

    const Person people[] = {
        { "Tony", 48, 1 },
        { "Brandy", 39, 2 },
        { "Madison", 16, 3 },
        { "Brayden", 14, 4 }
    };

    char *tony = people[0].name;

    for(int i=1; i<ARRAY_SIZE; i++) {
        printf("Person: Name - %s, Age - %i, Id = %i\n", people[i].name, people[i].age, people[i].id);
    }

    return 0;
}

