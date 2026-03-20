#include<stdio.h>
#include<string.h>

int main()

{
    char str1 [20]= "hyy";
    char str2 [] = "good";


   strcat(str1, str2);

    printf ("Concatenated = %s", str1);

    return 0;
    
}