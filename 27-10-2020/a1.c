#include<stdio.h>
int main(){
    int a,b,c;printf("Enter 3 prices : ");scanf("%d%d%d",&a,&b,&c);
    int sum=a+b+c;
    if(sum>5000){
        if(a>3000||b>3000||c>3000){
            printf("Amount to be paid (60 percent discount) : %.2f",(sum*0.4));
        }
        else
        {
            printf("Amount to be paid (50 percent discount) : %.2f",(sum*0.5));
        }
    }
    else if(sum>4000){
        if(a>2000||b>2000||c>2000){
            printf("Amount to be paid (40 percent discount) : %.2f",(sum*0.6));
        }
        else
        {
            printf("Amount to be paid (30 percent discount) : %.2f",(sum*0.7));
        }
    }
    else if(sum>2000){
        printf("Amount to be paid (20 percent discount) : %.2f",(sum*0.8));
    }
    else
    {
        printf("Amount to be paid : %d",sum);
    }
    return 0;
}