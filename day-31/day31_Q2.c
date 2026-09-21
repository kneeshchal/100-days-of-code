#include<stdio.h>
int main()
{
    int n, i, j;
    printf("enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n / 2; i++){

    arr[i] = arr[i] + arr[n - 1 - i];
    arr[n - 1 - i] = arr[i] - arr[n - 1 - i];
    arr[i] = arr[i] - arr[n - 1 - i];
    }
    printf("reversed array is: ");

    for(j = 0; j < n; j++){
    printf("%d ", arr[j]);
}
    return 0;
}
