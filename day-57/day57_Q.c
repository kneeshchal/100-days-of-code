#include<stdio.h>
int previousGreater(int arr[], int n, int i)
{
        for(int j = i - 1; j >= 0; j--){
            if(arr[j] > arr[i]){
                return arr[j];
            }
        }
        return -1;

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
    for(int i = 0; i < n; i++){
        int ans = previousGreater(arr, n, i);
        printf("%d", ans);

    if(i < n - 1){
            printf(", ");
        }
    }
    return 0;
}
