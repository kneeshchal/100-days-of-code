#include<stdio.h>
int ksmallest(int arr[], int n, int k)
{
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
                if(arr[j] > arr[j + 1]){
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
        }
    }
    return arr[k - 1];
}
int main()
{
    int n;
    printf("Enter number of elements: ");
        scanf("%d", &n);
        int arr[n];
        for(int i = 0 ; i <  n; i++){
            scanf("%d", &arr[i]);
        }
        int k;
        printf("Enter to find the kth smallest element: ");
        scanf("%d", &k);
        int answer = ksmallest(arr, n, k);
        printf("The %dth smallest elements is %d", k, answer);
        return 0;

}
