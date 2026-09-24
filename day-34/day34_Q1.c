#include<stdio.h>
int main()
{
    int n;
    printf("enter number of elements: ");
    scanf("%d", &n);
    int arr[n + 1];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int newNo, position;
    printf("enter number to be included: ");
    scanf("%d", &newNo);
    printf("enter index of new number: ");
    scanf("%d", &position);
    for(int i = n - 1; i >= position; i--){
        arr[i + 1] = arr[i];
    }
    arr[position] = newNo;
    for(int i = 0; i < n + 1; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
