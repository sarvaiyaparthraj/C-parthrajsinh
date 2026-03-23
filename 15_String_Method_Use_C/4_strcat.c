#include <stdio.h>

int main()
{
    char str1[20] = "Good";

    char str2[] = "Word";
    
    int i, j;

    for (i = 0; str1[i] != '\0'; i++)
    {
    }

    for (j = 0; str2[j] != '\0'; j++)
    {
        str1[i] = str2[j];
        i++;
    }

    str1[i] = '\0';

    printf("Concatenated = %s", str1);

    return 0;
}