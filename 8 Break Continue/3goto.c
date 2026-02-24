#include<stdio.h>


int main()

{
    int p = 1, d;

    printf("Enter your number: ");

    scanf("%p", &d);


start:

    if(p <= d)
    {
        printf("%d\n", p);

        p++;

        goto start;
    }

    return 0;
}

