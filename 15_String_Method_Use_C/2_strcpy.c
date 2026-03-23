#include <stdio.h>



int main()
{
    char str1[20];

    char str2[] = "Good Morning";
    int i;

    for (i = 0; str2[i] != '\0'; i++)
    {
        str1[i] = str2[i];
         
    }
    
    str1[i] = '\0';

   
       

    printf("copied string = %s", str1);
    

    return 0;
}