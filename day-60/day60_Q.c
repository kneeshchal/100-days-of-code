#include<stdio.h>
void findMax(int arr[], int n, int k)
{
    for(int i = 0; i <= n - k; i++){
            int max = arr[i];
        for(int j = i; j < i + k; j++){
            if(arr[j] > max){
                max = arr[j];
            }
        }
        printf("%d ", max);
    }
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
    printf("enter size of subarrays: ");
    scanf("%d", &k);
    findMax(arr, n, k);
    return 0;
}
