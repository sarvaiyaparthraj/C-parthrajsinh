

#include <stdio.h>

int main()

{

    int num = 19;


    int *ptr;


    ptr = &num;

    printf("%u=>%d\n", ptr, *ptr);


    int **ptr2;


    ptr2 = &ptr;


    printf("%u=>%d\n", ptr2, **ptr2);


    **ptr2 = 1914;


    printf("changed num %d", num);


    return 0;
}