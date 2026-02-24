#include<stdio.h>

int main()
{
    int p, d;

    printf("Enter your number: ");
    scanf("%d", &d);   

    for(p = 1; p <= d; p++)
    {
        if(p == d)
        {
            break;   
        }

        printf("%d\n", p);
    }

    printf("Loop stopped at i = %d\n", p);

    return 0;
}