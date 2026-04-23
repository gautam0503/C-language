#include<stdio.h>
#include<math.h>
int gcd(int a,int b);
int main(){
    int a,b;
    read:            //goto initialization
    printf("enter 2 numbers ");
    scanf("%d %d",&a,&b);
    printf("the gcd of 2 numbers are: %d ",gcd(a,b));
    goto read;         //goto calling
 
}
int gcd(int m,int n){
    if(n>m){
        return gcd(n,m);
    }
    else{
        return (m%n);
    }
}