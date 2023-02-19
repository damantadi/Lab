#include <stdio.h>
int main()
{
    int row, col, row_sum, col_sum;
    printf("Enter row and col number : ");
    scanf("%d%d", &row, &col);
    printf("Enter the elements : \n");
    int a[row][col];
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < row; i++)
    {
        row_sum = 0;
        for (int j = 0; j < col; j++)
            row_sum += a[i][j];
        printf("\nSum of Row %d is : %d", (i + 1), row_sum);
    }
    for (int i = 0; i < col; i++)
    {
        col_sum = 0;
        for (int j = 0; j < row; j++)
            col_sum += a[j][i];
        printf("\nSum of Col %d is : %d", (i + 1), col_sum);
    }
    return 0;
}