#include <stdio.h>

int main(){
    volatile int a = 6;
    volatile int * b;

    b=&a;

    a = 8;
    printf("a:%d, b:%d", a, *b);
    return 0;
}
