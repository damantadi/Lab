#include<stdio.h>
int main()
{
    int n,a,r,s=0;printf("Enter The Number: ");scanf("%d",&n);
    a=n;
    while(n>0){
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(a==s){
        printf("It is a Palindrome number");
    }
    else{
        printf("It is Not a palindrome number");
    }
    return 0;
}