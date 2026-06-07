/*#include<stdio.h>
struct complex{
    int real;
    int img;
};struct complex c1,c2;
struct complex add(struct complex c1,struct complex c2);
int main(){
    struct complex c1 = {2,3};
    struct complex c2 = {4,5};
    struct complex result = add(c1,c2);
printf("%d + %d", result.real, result.img);
}
struct complex add(struct complex c1,struct complex c2){
    struct complex c3;
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
    return (c3);
}*/
#include<stdio.h>
struct marks {
    int sub1;
    int sub2;
    int total;
}student[3];
int main(){
    struct marks student[3]={{43,37,0},{46,45,0},{23,25,0}};
    struct marks total;
    for(int i=0;i<3;i++){
        student[i].total=student[i].sub1+student[i].sub2;
    }
    printf("STUDENT       TOTAL\n\n");
    for(int i=0;i<3;i++){
        printf("student[%d]     %d\n",i,student[i].total);
    }
    }

