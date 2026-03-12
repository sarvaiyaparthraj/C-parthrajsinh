    #include <stdio.h>

    int main()
    {
        int r, c;
        int option;

        printf("Enter number of rows: ");
        scanf("%d", &r);

        printf("Enter number of columns: ");
        scanf("%d", &c);

        int arr[r][c];

        // Input matrix
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                printf("Enter value for [%d][%d]: ", i, j);
                scanf("%d", &arr[i][j]);
            }
        }

        do
        {
            printf("\n1. Display\n2. Modify\n3. Exit\n");
            printf("Enter option: ");
            scanf("%d", &option);

            switch(option)
            {
                case 1:
                    for(int i = 0; i < r; i++)
                    {
                        for(int j = 0; j < c; j++)
                        {
                            printf("%d ", arr[i][j]);
                        }
                        printf("\n");
                    }
                    break;

                case 2:
                {
                    int row, col, newValue;

                    printf("Enter row index and column index: ");
                    scanf("%d %d", &row, &col);

                    if(row >= 0 && row < r && col >= 0 && col < c)
                    {
                        printf("Enter new value: ");
                        scanf("%d", &newValue);

                        arr[row][col] = newValue;
                    }
                    else
                    {
                        printf("Invalid position\n");
                    }
                    break;
                }

                case 3:
                    printf("Program End\n");
                    break;

                default:
                    printf("Invalid option\n");
            }

        } while(option != 3);

        return 0;
    }