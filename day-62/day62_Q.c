#include<stdio.h>
int maxSubarray(int arr[], int n)
{
    int currentSum = arr[0];
    int maxSum = arr[0];
    for(int i = 1; i < n; i++){
        if(currentSum + arr[i] > arr[i]){
            currentSum = currentSum + arr[i];
        }
        else{
            currentSum = arr[i];
        }
        if(currentSum > maxSum){
            maxSum = currentSum;
        }

    }
    return maxSum;

}
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int answer = maxSubarray(arr, n);
    printf("Maximum Sum is %d", answer);
    return 0;
}
