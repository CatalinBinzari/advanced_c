#include <stdio.h>

int main(void){
    int num = 123;
    printf("num: %d\n", num);

    int *singlePointer = &num;
    printf("singlePointer: %d\n", *singlePointer);

    int **doublePointer = &singlePointer;
    printf("doublePointer: %d\n", **doublePointer);


    printf("address of num: %p\n", &num);
    printf("address of using single pointer: %p\n", singlePointer);
    printf("address of using double pointer: %p\n", *doublePointer);

    printf("value of pointer - single pointer: %d\n", *singlePointer);
    printf("value of pointer - single pointer unsing double pointer: %d\n", **doublePointer);

    printf("address of pointer - single pointer: %p\n", &singlePointer);
    printf("address of pointer - single pointer unsing double pointer: %p\n", &*doublePointer);
}