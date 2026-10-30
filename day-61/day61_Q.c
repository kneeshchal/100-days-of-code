#include<stdio.h>
void findNegative(int arr[], int n, int k)
{
    for(int i = 0; i <= n - k; i++){
        int flag = 0;
        for(int j = i; j < i + k; j++){
            if(arr[j] < 0){
               flag = 1;
               printf("%d ", arr[j]);
               break;
            }
        }
        if(flag == 0){
                printf("0 ");
            }
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
    printf("enter size of subarray: ");
    scanf("%d", &k);
    findNegative(arr, n, k);
    return 0;
}
