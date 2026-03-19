#include <stdio.h>
int main()
{
    // static

    // char str[]="ji";

    // {
    //     for(int i=0;str[i]!='\0';i++)

    //     {

    //         printf("%c",str[i]);

    //     }

    // }

    // dynamic

    char name[50];
    printf("Enter your name: ");

    scanf("%s", name);

    printf("\nWelcome, %s", name);

    return 0;
}

