#include <stdio.h>
#include <malloc.h>

void allocateMemory(int **ptr)
{
    *ptr = (int*)malloc(sizeof(int));
    // printf("\nPoint1: Memory allocated: %d bytes",_msize(*ptr));
}

int main(void){
    int *initialPtr = NULL;

    allocateMemory(&initialPtr);
    *initialPtr = 6;

    printf("deref initialPtr: %d\n", *initialPtr);

    free(initialPtr);
    return 0;
}
