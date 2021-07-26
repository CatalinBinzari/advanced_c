#include <stdio.h>
#include <malloc.h>

void foo(int **ptr)
{
    int a = 5;
    *ptr = &a;
}

int main() {
    int *ptr = NULL;
    ptr = (int *) malloc(sizeof(int));
    *ptr = 10;
    foo(&ptr);

    printf("%d\n", *ptr);

    // free(*ptr);
    return 0;

}