#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr1[n];
    for(int i = 0; i <n; i++){
        scanf("%d", &arr1[i]);
    }
    for(int k = 0; k < n; k++){
        printf("%d ", arr1[k]);
    }
    return 0;

}
