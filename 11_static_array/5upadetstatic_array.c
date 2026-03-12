#include <stdio.h>

int main()
{
    int arr[2][2] = {{1,2},{3,4}};
    int r,c,value;

    printf("Enter row and column: ");
    scanf("%d %d",&r,&c);

    printf("Enter new value: ");
    scanf("%d",&value);

    arr[r][c] = value;

    printf("Updated Matrix:\n");

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}