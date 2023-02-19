#include<stdio.h>
#define size 100
int main(){
    char string[size];printf("Enter a string : ");scanf("%[^\n]",string);
    int strlen=0;printf("Correct order : %s\n",string);
    while(string[strlen]!='\0') strlen++;
    printf("Reverse order : ");
    for(int i=strlen-1;i>=0;i--) printf("%c",string[i]);
    return 0;
}