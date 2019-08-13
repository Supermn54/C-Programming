#include <stdio.h>
#include <memory.h>

/*
 * function that adds "hello" to an existing string
 * input: passes in a char pointer 's'
 * output: returns a char pointer 'p'
 */
char *add_hello(char *s){
    char *p, *g;
    g = " hello!";  //allocates stack memory which gets deallocated after the return statement
    //allocates heap memory
    p = (char *) malloc(strlen(s) + strlen(g)+ 1); // +1 for '\0'
    if(p == NULL){
        return "p Error!";
    }
    strcpy(p, s);
    strcat(p, g);
    return p;

}

int main() {
    char *s;
    char *name = "Ben"; //allocates stack memory
    s = add_hello(name); //assigns char *s to char *p return value from add_hello()
    printf("%s\n", s);
    //char *s is assigned char *p (with allocated heap memory) so it's ok to free 's' vs 'p'
    free(s); //also example of how heap memory
    s = NULL;   //best practice
    return 0;
}