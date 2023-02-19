#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int row=1,col=1;printf("Enter number of rows and cols : ");scanf("%d%d",&row,&col);int a[row][col];
    int sol[row][col];time_t t;srand((unsigned) time(&t));
    printf("Enter choice (1/2)\n1.Random Matrix\n2.User Input Matrix\nChoice : ");int choice=1;scanf("%d",&choice);
    if(choice==1) for(int i=0;i<row;i++) for(int j=0;j<col;j++) a[i][j]=rand()%2;
    else for(int i=0;i<row;i++) for(int j=0;j<col;j++) scanf("%d",&a[i][j]);
    int start_row,start_col,target_row,target_col;
    printf("Print Path Data as : Start_Row Start_Col Target_Row Target_Col\n");
    printf("Your Matrix is : \n");for(int i=0;i<row;i++) { for(int j=0;j<col;j++) printf("%d ",a[i][j]); printf("\n"); }
    scanf("%d%d%d%d",&start_row,&start_col,&target_row,&target_col);int path=a[start_row][start_col];
    int current_row=start_row,current_col=start_col,dest_flag=0;
    printf("debug target row,col : %d,%d",target_row,target_col);
    if(a[target_row][target_col]!=path) printf("Not possible to reach target. Target lies on obstacle !");
    else{
        while((target_row!=current_row)&&(target_col!=current_col)){
            int count=0;
            for(int i=current_row-1;i<=current_row+1;i++){
                for(int j=current_col-1;j<=current_col+1;j++){
                    int coord_dist=(current_row-i)*(current_row-i)+(current_col-j)*(current_col-j);
                    if((coord_dist==1)&&(a[i][j]==path)){
                        sol[i][j]=path;current_row=i;current_col=j;
                        count++;
                        printf("\npath chosen , debug = %d , %d",current_row,current_col);
                    }
                }
            }
            if(count==0){
                printf("No path was found !");
                dest_flag=1;break;
            }
        }
    }
    for(int i=0;(i<row)&&(dest_flag==0);i++)
        for(int j=0;j<col;j++)
            if((sol[i][j]==1)||(sol[i][j]==0)) printf("%d ",sol[i][j]); else printf("  ");
    return 0;
}