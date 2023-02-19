#include<stdio.h>
int main(){
    char string[100];printf("Enter a string of even length : ");scanf("%[^\n]",string);
    int count=0,i=0;while(string[i]!='\0'){count++;i++;}
    for(int j=0;j<(count/2);j++){
        char temp=string[j];
        string[j]=string[j+(count/2)];
        string[j+(count/2)]=temp;
    }
    printf("New array is : %s",string);
    return 0;
}