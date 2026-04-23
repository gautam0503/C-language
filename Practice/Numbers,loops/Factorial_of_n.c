#include<stdio.h>
int main(){
    int n;
    printf("Enter The number needed for the factorial ");
    scanf("%d",&n);
    int fact=1;
    for(int i=n;i>=1;i--){
        printf("%d * ",i);
        fact*=i;

    }
    printf("\n");
    printf("%d \n",fact);
}