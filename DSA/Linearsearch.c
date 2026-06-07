#include<stdio.h>
int LinearSearch(int n,int target,int arr[n]);
int main(){
    int n,t;
    printf("Enter the total elements of the array: \n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the target to search ");
    scanf("%d",&t);
    int result=LinearSearch(n,t,arr);
    printf("the target is found at index %d",result);
}
int LinearSearch(int n,int target,int arr[n]){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }return -1;
}