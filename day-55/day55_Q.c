#include<stdio.h>
int Majority(int arr[], int n)
{
    for(int i = 0; i < n; i++){
            int count = 0;
        for(int j = 0; j  < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
    if(count > n / 2){
        return arr[i];
    }
    }
    return -1;
}
int main()
{
    int n;
    printf("number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int majorityElement = Majority(arr, n);
    printf("Majority element is %d", majorityElement);
    return 0;
}
