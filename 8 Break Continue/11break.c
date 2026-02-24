#include<stdio.h>

int main()
{
    int i, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i == 5)
        {
            continue;   
        }

        printf("%d\n", i);
    }

    printf("Number 5 was skipped!\n");

    return 0;
}