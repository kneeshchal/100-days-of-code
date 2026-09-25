#include<stdio.h>
int main()
{
    int n;
    printf("number of elements: ", n);
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int max1, max2;
    if(arr[0] > arr[1]){
        max1 = arr[0];
        max2 = arr[1];
    }
    else{
        max1 = arr[1];
        max2 = arr[0];
    }
    for(int q = 2; q < n; q++){
        if(arr[q] > max1){
            max2 = max1;
            max1 = arr[q];
        }
        else if(arr[q] > max2){
            max2 = arr[q];
        }
    }
    printf("second largest element is %d", max2);
    return 0;
}
