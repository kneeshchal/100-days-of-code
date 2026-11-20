#include<stdio.h>
int findRepeated(int arr[], int n)
{
    int seen[100] = {0};
    for(int i = 0;  i < n; i++){
        if(seen[arr[i]] == 1){
            return arr[i];
        }
        else{
            seen[arr[i]] = 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    printf("enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0;  i < n; i++){
        scanf("%d", &arr[i]);
    }
    int answer = findRepeated(arr, n);
    printf("repeated value is %d", answer);
    return 0;
}
