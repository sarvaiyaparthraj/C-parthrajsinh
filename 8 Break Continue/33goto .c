#include<stdio.h>

int main()
{
    int p = 1, n;

    printf("Enter a number: ");
    scanf("%d", &n);

start:

    if(p == 5)
    {
        goto end;   
    }

    if(p <= n)
    {
        printf("%d\n", p);
        p++;
        goto start;
    }

end:
    printf("Loop stopped at p = %d\n", p);

    return 0;
}