#include <stdio.h>

 int main()
{

    char a[5] = {'p','a','r','t','h'};
    printf("%c \n", a[0]);
    printf("%c \n", a[1]);
    printf("%c \n", a[2]);
    printf("%c \n", a[3]);
    printf("%c \n", a[4]);

    
// dynamic/

for (int i = 0; i <= 4; i++)
{
    printf("%c" , a[i]);
} 

    return 0;
}
