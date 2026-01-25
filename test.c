// Week 5 lecture
// showing the use of atoi
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int sum = 0;
    for (int i = 1; i < argc; i++) {
        // atoi converts a string to an int
        // For example atoi("123") would return the int 123.
        sum = sum + atoi(argv[i]);
    }
    printf("%d is the sum of all command line args\n", sum);
    return 0;
}