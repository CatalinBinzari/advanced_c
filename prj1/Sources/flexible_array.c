#include <stdio.h>
#include <malloc.h>

struct myArray
{
    int length;
    int array[];
};

int main(){
    int size = 0, dummy_int = 0;

    printf("Enter an integer: \n");
    scanf("%d", &size);  

    struct myArray *arr_p = NULL;
    
    arr_p = malloc(sizeof(struct  myArray) + size * (sizeof(int)));
    arr_p->length = size;

    for(int i = 0; i < arr_p->length; i++)
    {
        printf("Enter an dummy integer: \n");
        scanf("%d", &dummy_int);  
        arr_p->array[i] = dummy_int;
    }

    printf("Entire array:\n");
    for(int i = 0; i < arr_p->length; i++)
    {
        printf("%d ", arr_p->array[i]);
    }

    free(arr_p);

    return 0;
}
