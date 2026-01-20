// Lecture example for COMP1511/1911 Week 4
// Some simple examples demonstrating how strings work in C

#include <stdio.h>
#include <ctype.h>

#define MAX 20

void capitalise(char s[]);


int main(void) {
    char movie[MAX];
    printf("Type in your favourite movies: ");
    while (fgets(movie, MAX, stdin) != NULL){
        printf("%s\n",movie);
        capitalise(movie);
        printf("%s\n",movie);
    }
    
    return 0;
}

// convert every lowercase character in the given string, s to uppercase
void capitalise(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        s[i] = toupper(s[i]);
        i++;
    }
}