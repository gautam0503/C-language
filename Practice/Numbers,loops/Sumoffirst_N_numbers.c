#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("Enter the range needed: ");
    scanf("%d",&n);
    while(n!=0){
        sum+=n;
        n--;
    }
    printf("the sum is: %d",sum);
}