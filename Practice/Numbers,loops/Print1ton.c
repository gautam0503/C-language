#include<stdio.h>
int main(){
    int n;
    int i=1;
    printf("enter the range of numbers needed");
    scanf("%d",&n);
    while(i<=n){
        printf("%d \n",i);
        i++;
    }
}