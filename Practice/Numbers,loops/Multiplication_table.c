#include<stdio.h>
int main(){
    int n;
    printf("Enter the Multiplication table needed ");
    scanf("%d",&n);
    int m;
    printf("Enter till what value of the table needed ");
    scanf("%d",&m);
    for(int i=0;i<=m;i++){
        printf("%d * %d = %d \n",n,i,n*i);
    }


}