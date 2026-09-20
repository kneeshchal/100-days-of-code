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
    int positive = 0;
    int negative = 0;
    int zero = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            positive++;

        }
        else if(arr[i] < 0){
            negative++;
        }
        else{
            zero++;
        }

    }
    printf("positive elements: %d\n", positive);
    printf("negative elements: %d\n", negative);
    printf("zeroes: %d\n", zero);
    return 0;
}
