#include <stdio.h>
#include <stdlib.h>

// Function declarations
void print_int_by_value(int number);
void print_int_by_reference(int *number_ptr);

void malloc_int_safe(int **number_ptr);

void add_one(int *input) {
    *input = *input + 1;
}

int main(int argc, char *argv[]) {
    
    int my_int = 10;

    int *ptr = &my_int;

    int **dbl_ptr = &ptr;

    add_one(&my_int);

    print_int_by_value(my_int);

    print_int_by_reference(&my_int);

    printf("Num is %d\n", my_int);

    // 1. Create function that takes in a pointer to an int, attempts to malloc memory for it and return the pointer 
    // This will not work (memory leak will occur because the pointer passed in points to memory on the stack)

    // 2. Create a function that takes in a pointer to a pointer to an int and malloc memory to the dereferenced pointer pointer
    malloc_int_safe(&ptr); // pass the address of the 'ptr'

    // printf("Pointer is %p\n", &ptr);
    // printf("Pointer to ptr %p\n", &dbl_ptr);

    return 0;
}

// Function definitions

void print_int_by_value(int number) {
    printf("Printing Int =>> Address: %p | Value %d\n", &number, number);
}

void print_int_by_reference(int *number_ptr) {
    printf("Printing Int =>> Address: %p | Value %d\n", number_ptr, *number_ptr);
}

// This will work nicely and will not cause a memorty leak as long as the caller of this function frees the memory
void malloc_int_safe(int **number_ptr) {
    *number_ptr = (int*)malloc(sizeof(int));
}
