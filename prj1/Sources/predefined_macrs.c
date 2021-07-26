//file __FILE__ 
//line __LINE__
//func __func__ name of function
//date __DATE__
//time __TIME__
#include <stdio.h>

int main(void)
{
    FILE pfile;
    char *filename = "test";
    printf("was called func:%s\n", __func__);
    printf("was called date:%s\n", __DATE__); //Jul 20 2021
    printf("was called time:%s\n", __TIME__); //hh:mm:ss
    // if(fopen(&pfile, filename))
    // {
    //     fprintf(stderr, "Failed to open file in %s line %d\n", __FILE__, __LINE__);
        
    //      return -1;
    // }
}