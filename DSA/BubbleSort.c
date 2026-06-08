//Bubble sort always checks current  with the next and pushes the maximum  number to last in each iteration 

#include<stdio.h>
int BubbleSort(int  n,int arr[n]);
int main(){
    int n,t;
    printf("Enter the total elements of the array: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Elemnets: ");
        for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    BubbleSort(n,arr);
    
}
int BubbleSort(int n,int arr[n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
            printf("after %d pass \n",i);
            for(int k=0;k<n;k++){
                printf("%d ",arr[k]);
            }printf("\n");
        }
    }
    
   }
