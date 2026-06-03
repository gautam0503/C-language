/*#include<stdio.h>
#include<string.h>
int main(){
    char str1[30];
    char str2[30];
    printf("enter the 2 strings 2 compare:");
   scanf("%s",&str1);
    scanf("%s",&str2);
    int n=strcmp(str1,str2);
    strcpy(str1,str2);
    printf("%d",n);
    printf("%s",str1);
    strcat(str1,str2);
    printf("%s",str1);
}

#include<stdio.h>
#include<conio.h>
int main(){
    char str[20];
    char revstr[20];
    printf("enter the string\n");
    gets(str);
    strcpy(revstr,str);
    strrev(revstr);
    printf("the reverse of the string is %s\n",revstr);
    if(strcmp(revstr,str)==0){
        printf("Its a palindrome\n");

    }
    else{
        printf("Not a palindrome");
    }
}

#include<stdio.h>
#include<string.h>
int main(){int i=0,j=0;
    char arr[5][20],dummy[20];
    printf("enter 5 cities");
    while(i<5){
    scanf("%s",arr[i++]);
}
for(i=1;i<5;i++){
    for(j=1;j<5-i;j++){
        if(strcmp(arr[j-1],arr[j])>0){
            strcpy(dummy,arr[j-1]);
            strcpy(arr[j-1],arr[j]);
            strcpy(arr[j],dummy);

        }
    }
  for(i=0;i<5;i++)
    printf("%s\n",arr[i]);
}
}*/
#include<stdio.h>
int factorial(int n);
int main(){
    int N;
    printf("entrer the factorial number");
    scanf("%d",&N);
    printf("%d",factorial(N));}
    int factorial(int n){
        int fact;
        if(n<0){
            return 0;
        }
                if(n==1){
                    return 1;
                }
                else{
                     fact=n*factorial(n-1);
                }return fact;

    }

