//Same as bubble sort but it finds minimum value an puts in first
//Bubble sort always checks current  with the next and pushes the maximum  number to last in each iteration 

#include<stdio.h>
int SelectionSort(int  n,int arr[n]);
int main(){
    int n,t;
    printf("Enter the total elements of the array: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Elemnets: ");
        for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    SelectionSort(n,arr);
    
}
void SelectionSort(int n, int arr[])
{
    int min;

    for(int i=0; i<n-1; i++)
    {
        min = i;

        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;

        printf("After pass %d:\n", i+1);
        for(int k=0; k<n; k++)
        {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}