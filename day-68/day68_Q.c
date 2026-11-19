#include<stdio.h>
int missingValue(int arr[], int n)
{
    int expected = 0;
    for(int i = 0;  i <= n; i++){
        expected = expected + i;
    }
    int sum = 0;
    for(int i = 0;  i < n; i++){
        sum = sum + arr[i];
    }
    int missing;
    missing = expected - sum;
    return missing;
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
    int answer = missingValue(arr, n);
    printf("Missing number is %d", answer);
    return 0;
}
