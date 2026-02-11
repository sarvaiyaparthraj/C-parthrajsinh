
#include<stdio.h>

int main()
{
   
    char name[20];
    int marks;

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Marks: ");
    scanf("%d", &marks);

    printf("\nStored Data:\n");
    printf("Name = %s\n", name);
    printf("Marks = %d\n", marks);

    return 0;
}

