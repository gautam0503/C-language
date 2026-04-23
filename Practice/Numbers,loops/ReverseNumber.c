#include<stdio.h>
int main(){
    int n,digit;
    printf("Enter the digit \n");
    scanf("%d",&n);
    printf("\n");

    while(n!=0){
        digit=n%10;
        printf("%d",digit);
        n=n/10;
        
    }
    
}