#include<stdio.h>

int main(){
    int a, i=2, check;
    int j=100;
    while(j<=2000){
        a=j;
        check=0;
    
        while(i<=a/2){
            if(a%i == 0){
                check=1;
                break;
            }
            i++;
        }
        if(check==0){
            printf("%d\n",a);
            j++;
        }
        else{
            j++;
        }
    }
    return 0;
}