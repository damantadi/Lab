#include<stdio.h>
int main(){
    int y1=2002,m1=07,d1=18,y2=2020,m2=07,d2=18;
    printf("Enter first date : ");scanf("%d%d%d",&y1,&m1,&d1);
    printf("Enter second date : ");scanf("%d%d%d",&y2,&m2,&d2);
    if(d1<d2){
        d1+=31;
        m1--;
    }
    if(m1<m2){
        m1+=12;
        y1--;
    }
    printf("Difference is : %d %d %d",(d1-d2),(m1-m2),(y1-y2));
    return 0;
}