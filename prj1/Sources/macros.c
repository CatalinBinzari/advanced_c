#include <stdio.h>
#define FIRST 3
#define SERCOND 5
#define SUM(a,b) ((a)+(b))
#define Warning(...) fprintf(stderr, __VA_ARGS__)
#define MIN(x,y) \
    ((x)<(y) ? (x) : (y))

#define TOKENCONCAT(x,y) x ## y
#define make_function(name) int my ## name(int foo){}
#define HELLO(x) printf("Hello, " #x "\n"); //#test -> "test"
make_function(bar); //mybar(){}
int main(){
    
    printf("a:%d, b:%d, sum: %d\n", FIRST, SERCOND, SUM(FIRST, SERCOND));
    Warning("%s", "some\n" );
    HELLO(Catalin);
    // printf("%s", TOKENCONCAT(o,k));
    
    return 0;
}
