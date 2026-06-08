#include<stdio.h>
int BinarySearch(int n,int target,int arr[n]);
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
    int result=BinarySearch(n,t,arr);
    printf("the target is found at index %d",result);
}
int BinarySearch(int n,int target,int arr[n]){
    int count=0;
    int left=0;
    int right =n-1;
   while(left<=right){
    int mid=(left+right)/2;
    count++; 
    if(arr[mid]==target){printf("count: %d\n",count);return mid;}
    else if(arr[mid]<target){left=mid+1;}
    else if(arr[mid]>target){right=mid-1;}   }return left;
   }
