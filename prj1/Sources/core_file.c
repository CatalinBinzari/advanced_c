// ulimit -c unlimited
// after segmentation core, a core file will appear
// gdb ./a.out  core
//se where program crashed
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str = "Cfg"; //RO memory

    *(str+1) = 'n';

    return 0;
}