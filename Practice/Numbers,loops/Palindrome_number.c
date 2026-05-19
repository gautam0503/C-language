#include<stdio.h>
int main(){
    int n;
    printf("Enter the palindrome number ");
    scanf("%d",&n);
    int temp=n;
    int digit;
    
    int rev=0;
    printf("reverse of that number is\n ");
    while(n!=0){
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
     printf("%d \n",rev);
     if(temp==rev)
        printf("the entered number is a palindrrome");
     
     else
     printf("not a palindrome");
}