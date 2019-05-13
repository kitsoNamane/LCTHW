#include <stdio.h>

/* This is a comment. */
int main(int argc, char *argv[]) {
    // ! HOW TO BREAK:
    // * 1. int age;
    // * 2. remove int age and compile

    // ! RESULTS:
    // * 1. Compiles with warning: -Wuninitialized
    // * 2. Error, does not compile

    int age;
    int height = 180;

    // this is also a comment
    printf("I am %d years old.\n", age);
    printf("I am %d centimetres tall.\n", height);

    return 0;
}