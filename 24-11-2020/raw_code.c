#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter row and col number : ");
    scanf("%d%d", &row, &col);
    printf("Enter the elements : \n");
    int a[row][col];
    int target_row = row / 2, target_col = col / 2, in_flag = 0;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &a[i][j]);
    printf("Location of element whose neighbours are required (row col): ");
    scanf("%d%d", &target_row, &target_col);
    if ((target_row < 1 || target_row > row) || (target_col < 1 || target_col > col))
    {
        in_flag = 1;
        printf("Wrong element index");
    }
    if (in_flag == 0)
        printf("Neighbourhood Matrix is : \n");
    for (int i = 0; i < row && in_flag == 0; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int coord_dist = (((target_row - i - 1) * (target_row - i - 1)) + ((target_col - j - 1) * (target_col - j - 1)));
            if (coord_dist == 1 || coord_dist == 2)
                printf("%d ", a[i][j]);
            else
                printf("_ ");
        }
        printf("\n");
    }
    return 0;
}