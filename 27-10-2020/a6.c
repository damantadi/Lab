#include<stdio.h>
int main(){
    int a,d1,d2;printf("Enter 2 digit number between 20 to 99 : ");scanf("%d",&a);
    int error_flag=0;
    if(a>20&&a<=99){
        d2=a%10;
        a=a/10;
        d1=a;
        switch(d1){
            case 2:
                printf("twenty");
                break;
            case 3:
                printf("thirty");
                break;
            case 4:
                printf("forty");
                break;
            case 5:
                printf("fifty");
                break;
            case 6:
                printf("sixty");
                break;
            case 7:
                printf("seventy");
                break;
            case 8:
                printf("eighty");
                break;
            case 9:
                printf("ninety");
                break;
            default:
                error_flag=1;
        }
        if(error_flag==0){
            switch(d2){
            case 1:
                printf(" one");
                break;
            case 2:
                printf(" two");
                break;
            case 3:
                printf(" three");
                break;
            case 4:
                printf(" four");
                break;
            case 5:
                printf(" five");
                break;
            case 6:
                printf(" six");
                break;
            case 7:
                printf(" seven");
                break;
            case 8:
                printf(" eight");
                break;
            case 9:
                printf(" nine");
                break;
        }
        }
        else
        {
            printf("Error !!");
        }
        
    }
    return 0;
}