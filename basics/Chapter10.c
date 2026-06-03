//Selection sort
/*#include<stdio.h>
void selectionsort(int arr[],int n);
int main(){
    int n;
    printf("Enter the size of the array ");
    scanf("%d",&n);
    int a[n];
    printf("enter the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
  selectionsort(a,n);
}
void selectionsort(int arr[],int n){
    int min;
    for(int i=0;i<n;i++){
        min=arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
            }
        } int temp=arr[i];
                arr[i]=min;
                min=temp;
    }printf("The sorted array is :");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}*/
// BUBBLE SORT:
#include<stdio.h>
void sort(int arr[],int m);
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,n);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
void sort(int arr[],int m){
    for(int i=0; i<m-1; i++){
    for(int j=0; j<m-i-1; j++){
        if(arr[j] > arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}
}