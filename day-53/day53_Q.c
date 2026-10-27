#include<stdio.h>
int findPivot(int arr[], int n){
   for(int i = 0; i < n; i++){
    int leftSum = 0;
    int rightSum = 0;
    for(int j = 0; j < i; j++){
        leftSum += arr[j];
    }
    for(int j = i + 1; j < n; j++){
        rightSum += arr[j];
    }
    if(leftSum == rightSum){
        return i;
    }
   }
   return -1;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int pivot = findPivot(arr, n);
    printf("%d", pivot);
    return 0;
}
