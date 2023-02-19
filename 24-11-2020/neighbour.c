/*Write a program to input an n x m matrix from the user. Also prompt the user to enter the position of the number whose neighbours
are to be displayed.*/
#include <stdio.h>
/*Driver code*/
int main()
{
    //row = number of rows in matrix ; col = number of columns in matrix
    int row, col;
    printf("Enter row and col number : ");
    scanf("%d%d", &row, &col);
    printf("Enter the elements : \n");
    //Dynamically initalising the array 
    int a[row][col];
    //Note : The above dynamic array initialisation is not allowed in older versions of C
    //Please make sure that your compiler supports dynamic array creation

    //Initialising target_row and target_col to default values and setting in_flag to 0
    int target_row = row / 2, target_col = col / 2, in_flag = 0;
    //Taking n x m inputs from user
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &a[i][j]);
    //Prompt user to enter target position , overrides the default values
    printf("Location of element whose neighbours are required (row col): ");
    scanf("%d%d", &target_row, &target_col);
    //Checks whether the entered indices are valid. Note : The indexing starts from 1 (to keep it easy to use by unfamiliar users)
    if ((target_row < 1 || target_row > row) || (target_col < 1 || target_col > col))
    {
        //Setting in_flag to 1 so that non-essential statements can be skipped
        in_flag = 1;
        printf("Wrong element index");
    }
    //Check if in_flag is still 0 which would mean that indices entered were legal
    if (in_flag == 0)
        printf("Neighbourhood Matrix is : \n");
    //Iterate through all the elements of the matrix
    for (int i = 0; i < row && in_flag == 0; i++)
    {
        for (int j = 0; j < col; j++)
        {
            //Calculate the distance using the coordinate formula and save it in coord_dist
            int coord_dist = (((target_row - i - 1) * (target_row - i - 1)) + ((target_col - j - 1) * (target_col - j - 1)));
            //Print the element only if the distance is either 1 or 2 else print an underscore
            if (coord_dist == 1 || coord_dist == 2)
                printf("%d ", a[i][j]);
            else
                printf("_ ");
        }
        //Enter a newline after every row's iteration is completed
        printf("\n");
    }
    //Exit main 
    return 0;
}