#include <stdio.h>



int main()
{
    char str[] = "parthrajsinh";

    int i, j, len = 0, temp;

    for (int i = 0; str[i] != '\0'; i++)

    {
        len++;
    }

    for (i = 0, j = len - 1; i < j ; i++, j--)
    {
        temp=str[i];
        
        str[i]=str[j];
        
        str[j]=temp;
    }

    printf("Reverce = %s", str);

    return 0;
}