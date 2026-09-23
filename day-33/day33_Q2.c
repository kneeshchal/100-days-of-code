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
    int newNo;
    printf("enter new number to be entered: ");
    scanf("%d", &newNo);
    int position = n;
    for(int i = 0; i < n; i++){
        if(newNo < arr[i]){
            position  = i;
            break;
        }
    }
    for(int i = n - 1; i >= position; i--){
        arr[i + 1] = arr[i];

    }
            arr[position] = newNo;
    for(int i = 0; i < n + 1; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
