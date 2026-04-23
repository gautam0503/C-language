#include<stdio.h>
int main(){
    int n;
    
    printf("enter the range of numbers needed: ");
    scanf("%d",&n);
    while(n!=0){
        printf("%d \n",n);
        n--;
    }
}