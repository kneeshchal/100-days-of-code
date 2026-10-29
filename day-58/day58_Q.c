#include<stdio.h>
void prodSelf(int arr[], int n, int ans[])
{
    for(int i = 0; i < n; i++){
            int product = 1;
        for(int j = 0; j < n; j++){
            if(j != i){
                product = product * arr[j];
            }
        }
        ans[i] = product;
    }
}
int main()
{
    int n;
    printf("enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int ans[n];
    prodSelf(arr, n, ans);
    for(int i = 0; i <  n; i++){
        printf("%d ", ans[i]);
    }
    return 0;
}
