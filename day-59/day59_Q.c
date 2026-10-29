#include<stdio.h>
int sumSubarray(int arr[], int n, int k)
{
    int maxSum = arr[0];
    for(int i = 0; i <= n - k; i++){
        int sum = 0;
        for(int j = i; j < i + k; j++){
            sum = sum + arr[j];
        }
        if(sum > maxSum){
            maxSum = sum;
        }
    }
    return maxSum;
}
int main()
{
    int n;
    printf("enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int k;
    printf("enter number of elements in subarray: ");
    scanf("%d", &k);
    int sum_of_subarray = sumSubarray(arr, n, k);
    printf("maximum sum of subarray is %d", sum_of_subarray);
    return 0;
}
