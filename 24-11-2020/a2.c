#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter row and col number : ");
    scanf("%d%d", &row, &col);
    printf("Enter the elements : \n");
    int a[row][col];
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &a[i][j]);
    printf("Matrix is : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}