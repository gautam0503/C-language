#include<stdio.h>
int main(){
    int n;
    printf("Enter the digit ");
    scanf("%d",&n);
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
        
    }
    printf(" total digits is %d",count);
}