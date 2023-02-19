#include<stdio.h>
#define size 100
int main(){
    char string[size];printf("Enter a string : ");
    scanf("%[^\n]",string);printf("%s",string);
    return 0;
}