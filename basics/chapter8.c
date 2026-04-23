#include<stdio.h>

int main(){
     /*int total,n,arr[n];
     printf("enter the ize of array ");
     scanf("%d",&n);
     printf("enter the values of the array");
     for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
     }
     total=0;
     for (int i=0;i<n;i++){
        total+=arr[i];
     }
     printf("%d",total);*/

int i,j,c[3][3],d[3][3];
printf("Enter the values of the 3X3 matrix");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("enter the values of [%d][%d]: ",i,j);
        scanf("%d",&c[i][j]);
    }
}
for(i=0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++){
        d[i][j]=c[j][i];
        
    }
}
for(i=0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++){
        printf("%d   ",d[i][j]);
        
    }
}

}

