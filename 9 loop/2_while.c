#include <stdio.h>

int main()
{
    int sum = 0;

    int p = 0;

    while (p < 10)
    {
        sum += p;
        
        p++;
    }

    printf("Sum = %d\n", sum);

    return 0;
}