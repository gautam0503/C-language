#include<stdio.h>
int main(){
    FILE *p;
    char c;
    printf("data Input\n\n");
    p=fopen("Student","w");
    while((c=getchar())!=EOF){
        putc(c,p);
    }
    fclose(p);
    printf("Data output\n\n");
    p=fopen("Student","r");
    while((c=getc(p))!=EOF){
        printf("%c",c);
    }
    fclose(p);
}