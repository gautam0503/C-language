#include<stdio.h>
#include<math.h>
int power(int c,int d);
int main(){
int a=5;
int b=5;
double c=pow(a, b);
printf("%04.0f\n",c);
// without inbuilt function
 int x=10;
 int y=2;
 printf("%d",power(x,y));
 }
int power(int c,int d){
    int result=1;
    for(int i=1;i<=d;i++){
        result=result*c;
    }
    return (result);
 }
