#include<stdio.h>
int main(){
    int h1,m1,h2,m2;printf("Enter 1st time : ");scanf("%d%d",&h1,&m1);
    printf("Enter 2nd time : ");scanf("%d%d",&h2,&m2);
    if(m2>m1){
        m1+=60;
        h1--;
    }
    printf("Time difference : %d hr %d min",(h1-h2),(m1-m2));
    return 0;
}