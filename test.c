// Week 5 lecture
// showing the use of atoi
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("There are %d command line arguments\n", argc);
   
    // argv[0] is always the program name
    printf("This program name is %s\n", argv[0]);
    // print out all arguments in the argv array
    for (int i = 0; i < argc; i++) {
        printf("Argument at index %d is %s\n", i, argv[i]);
    }
    return 0;
}