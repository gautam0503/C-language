//short hand assignment operator
#include<stdio.h>
#define N 200
#define a 2
int main(){
    int b=a ;
    while(b<N){
        
        printf("%d\n",b);
        b*=b;
    }
    //vowel or consonant
    char c;
    printf("enter any char ");
    scanf("%c", &c);
    printf((c=='a'||c=='e'||c=='i'||c=='o'||c=='u')?"vowel":"consonant");

}