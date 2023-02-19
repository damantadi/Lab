#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter row and col number : ");
    scanf("%d%d", &row, &col);
    printf("Enter the elements : \n");
    int a[row][col], memory, sum, mem_flag = 0, dest_flag = 0;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &a[i][j]);
    if (col != row)
        dest_flag = 1;
    for (int i = 0; i < row && dest_flag != 1; i++)
    {
        sum = 0;
        for (int j = 0; j < col; j++)
            sum += a[i][j];
        if (mem_flag == 0)
        {
            mem_flag = 1;
            memory = sum;
        }
        if (sum != memory)
        {
            dest_flag = 1;
            break;
        }
    }
    for (int i = 0; i < col && dest_flag != 1; i++)
    {
        sum = 0;
        for (int j = 0; j < row; j++)
            sum += a[j][i];
        if (sum != memory)
        {
            dest_flag = 1;
            break;
        }
    }
    sum = 0;
    int sec_diag_sum = 0;
    for (int i = 0; i < row && dest_flag != 1; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
                sum += a[i][j];
            if (i == col - i - 1)
                sec_diag_sum += a[i][j];
        }
    }
    if ((sum != memory) || (sec_diag_sum != memory))
        dest_flag = 1;
    if (dest_flag == 0)
        printf("It is a magic matrix");
    else
        printf("It is not a magic matrix");
    return 0;
}