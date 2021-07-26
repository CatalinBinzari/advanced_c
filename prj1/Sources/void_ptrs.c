#include <stdio.h>

int main() {
    int i = 10;
    float f = 2.34;
    char ch = 'k';

    void *vptr = NULL;


    vptr = &i;
    printf("int v: %d\n", * (int*)vptr);

    vptr = &f;
    printf("float v: %.2f\n", * (float*)vptr);

    vptr = &ch;
    printf("char v: %c\n", * (char*)vptr);

    return 0; 
}
