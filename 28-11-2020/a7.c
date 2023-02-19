#include<stdio.h>
int main(){
    int row=1,col=1,count=0;printf("Enter rows and cols number : ");scanf("%d%d",&row,&col);
    printf("Enter the elements of the matrix : \n");int a[row][col];
    for(int i=0;i<row;i++) for(int j=0;j<col;j++) scanf("%d",&a[i][j]);
    printf("Enter number to be counted : ");int search;scanf("%d",&search);
    for(int i=0;i<row;i++) for(int j=0;j<col;j++) if(a[i][j]==search) count++;
    printf("Frequency of %d in array is : %d",search,count);
    return 0;
}