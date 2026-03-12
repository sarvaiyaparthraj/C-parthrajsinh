#include <stdio.h>

int main()
{
    int r,c;

    printf("Enter rows: ");
    scanf("%d",&r);

    printf("Enter columns: ");
    scanf("%d",&c);

    int arr[r][c];

    // Input matrix
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter element [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    int row,col,value;

    printf("Enter row and column to update: ");
    scanf("%d %d",&row,&col);

    if(row < r && col < c)
    {
        printf("Enter new value: ");
        scanf("%d",&value);

        arr[row][col] = value;
    }
    else
    {
        printf("Invalid position\n");
    }

    printf("\nUpdated Matrix:\n");

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