#include<stdio.h>
int main(){
    int n,digit;
    printf("Enter the digit \n");
    scanf("%d",&n);
    printf("\n");
    int rev=0;

    while(n!=0){
        digit=n%10;
        rev=rev*10+digit;
        
        n=n/10;
        
    }
    printf("%d",rev);
    
}