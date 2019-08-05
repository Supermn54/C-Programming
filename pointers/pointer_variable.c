/********************************************
 * Basic Pointer Variables Example
 * Covers: Reference & Dereference Operators
 *******************************************/

#include <stdio.h>

int main() {

    int *pc;
    int c;

    c = 22;
    printf("Address of c: %u\n", &c);   //prints address of 'c'
    printf("Value of c: %d\n\n", c);    //prints value of c (22)

    printf("Address of pointer pc: %u\n", pc);  //prints address of 'pc' before assigning new address
    pc = &c;    //assigns address of c to pointer pc
    printf("Address of pointer pc: %u\n", pc);  //prints address of c
    printf("Content of pointer pc: %d\n\n", *pc);   //prints value of c

    c = 11;     //changes both the value of c AND *pc
    printf("Address of pointer pc: %u\n", pc);  //address of pc doesn't change
    printf("Content of pointer pc: %d\n\n", *pc);

    *pc = 2;    //changes both the value of *pc AND c
    printf("Address of c: %u\n", &c);
    printf("Value of c: %d\n\n", c);
    printf("Content of pointer pc: %d\n\n", *pc);
    return 0;
}