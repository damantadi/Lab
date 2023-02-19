#include<stdio.h>
void main()
{   
    int a,date=1;
    int i=0,j=1;
    printf("Enter the day number of date 1: ");
    scanf("%d",&a);
    if(a>7){
        printf("Wrong input");
    }
    else{
        printf("S\tM\tT\tW\tT\tF\tS\n");
        while(date<=31){
            while(j<a){
                printf("\t");
                j++;
            }
            i = a;
            while(i<=7&&(date<=31)){
                printf("%d\t",date);
                date++;
                i++;
            }
            a = 1;
            j = 7;
            printf("\n");
        }
    }
}