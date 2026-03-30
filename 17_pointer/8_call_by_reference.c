

#include <stdio.h>

int callByReference(int *num)
{

    *num = 50;
}

int main()
{

    int numAgreement = 14;

    int *ptr;

    ptr = &numAgreement;

    int result = callByReference(ptr);

    printf("num argument %d\n", numAgreement);

    return 0;
}