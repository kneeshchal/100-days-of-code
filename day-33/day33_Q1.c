#include<stdio.h>
int main()
//binary search for ascending order array only
{
    int n;
    printf("enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int key;
    printf("enter number to find: ");
    scanf("%d", &key);
    int low = 0;
    int high = n - 1;
    int mid;
    int found = 0;
    while(low <= high){
         mid = (low + high) / 2;
        if(key == arr[mid]){
            printf("number is at index %d", mid);
            found = 1;
            break;
        }
        else if(key > arr[mid]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    if(found == 0){
        printf("number entered is not in given array");
    }
    return 0;
}
