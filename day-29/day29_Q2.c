#include<stdio.h>
int main()
{
    int n;
    printf("number of elements ", n);
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int max, min;
    if(arr[0] > arr[1]){
        max = arr[0];
        min = arr[1];
    }
    else{
        max = arr[1];
        min = arr[0];
    }
    for(int q = 2; q < n; q++){
        if(arr[q] > max){

            max = arr[q];
        }
        if(arr[q] < min){
            min = arr[q];
        }

        }

    printf("largest element is %d\n", max);
    printf("smallest element is %d\n", min);
    return 0;
}
