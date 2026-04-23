#include<stdio.h>
int main(){
   int a;
    printf("enter a number");
    read: 
    scanf("%d",&a);
    if(a<0){
        goto read;}
    int y=a*a;
    printf("%d",y);


}
    
