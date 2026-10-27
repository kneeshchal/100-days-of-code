#include<stdio.h>
int findCeil(int arr[], int n, int x){
for(int i = 0; i  < n; i++){
    if(arr[i] >= x){
        return i;
    }
}
    return -1;
}
int main()
{
    int n;
    scanf("%d", &n);
        int arr[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        int x;
        scanf("%d", &x);
        int index = findCeil(arr, n, x);
        printf("%d", index);
        return 0;
}
