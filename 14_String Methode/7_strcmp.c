#include<stdio.h>
#include<string.h>

int main()

{
    char str1 [] = "RABIT";
    char str2 [] = "APPLE";

    int result = strcmp(str1, str2);

    printf("Result = %d", result);

    return 0;
    
}