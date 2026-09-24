#include<stdio.h>
int main()
{
    int n;
    printf("enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int deleteIndex;
    printf("index to be deleted: ");
    scanf("%d", &deleteIndex);

    for(int i = deleteIndex; i < n - 1; i++){
    arr[i] = arr[i + 1];
}
for(int i = 0; i < n - 1; i++){
    printf("%d ", arr[i]);
}
return 0;
}
