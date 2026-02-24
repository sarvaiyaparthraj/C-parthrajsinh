




#include <stdio.h>

int main ()
{
    int p,a;
    printf("Enter your number");

    scanf("%d",&a);
    for (int p = 1; p <= a; p++ )
    {
        if (p==a)
        {
            break;
        }
        printf("%d\n", p);


    }
    return 0;
}