#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int count = 4;
    int *my_ptr = (int*)malloc(count * sizeof(int));

    // 1. Simple pointer addition
    // printed addresses are incremented by the size of the int type (defined by machine architecture) 
    for(int i=0; i<count; i++) {
        printf("my_ptr address: %p\n", my_ptr + i);
    }

    int initial_value = 5;
    for(int i=0; i<count; i++) {
        // 2. Assigning values to memory addresses using pointer arithmetic
        *(my_ptr + i) = initial_value++;

        // 3. Dereferencing pointers using pointer arithmetic
        printf("my_ptr position %d value: %d\n", i, *(my_ptr + i));
    }

    int *my_other_ptr = (int*)malloc(count * sizeof(int));

    printf("\nStarting address of malloc'd block: %p", my_other_ptr);

    for(int i=0; i<count; i++) {
        printf("my_other_ptr address: %p\n", my_other_ptr++);
    }

    // The starting position of this block of malloc'd memory has been lost
    printf("Still expecting this to be the starting address of the malloc'd block: %p\n", my_other_ptr);

    return 0;
}