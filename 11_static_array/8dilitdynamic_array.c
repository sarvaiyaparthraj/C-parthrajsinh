#include <stdio.h>

int main()
{
    int r,c,row,col;

    printf("Enter rows: ");
    scanf("%d",&r);

    printf("Enter columns: ");
    scanf("%d",&c);

    int arr[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter element [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Enter row and column to delete: ");
    scanf("%d %d",&row,&col);

    if(row < r && col < c)
    {
        arr[row][col] = 0;
    }
    else
    {
        printf("Invalid position\n");
    }

    printf("Matrix after delete:\n");

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}