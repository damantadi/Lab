#include<stdio.h>
int main(){
    char string[100],count=0,j=0;printf("Enter a string : ");scanf("%[^\n]",string);
    while(string[j]!='\0'){count++;j++;}
    for(int i=0;i<(count/2);i++){
        char temp=string[i];
        string[i]=string[count-i-1];
        string[count-i-1]=temp;
    }
    printf("Reversed string is : %s",string);
    return 0;
}