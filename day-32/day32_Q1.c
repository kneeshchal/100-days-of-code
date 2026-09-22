#include<stdio.h>
int main()
{
    int n, m;

    printf("enter number of elements in first array: ");
    scanf("%d", &n);

    int arr1[n];

    printf("enter number of elements in second array: ");
    scanf("%d", &m);

    int arr2[m];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }
    for(int j = 0; j < m; j++){
        scanf("%d", &arr2[j]);
    }
    int arr3[n + m];
    for(int i = 0; i < n; i++){
        arr3[i] = arr1[i];
    }
    for(int i= 0; i < m; i++){
        arr3[n + i] = arr2[i];

    }
    printf("merged array is ");
    for(int i = 0; i < n + m; i++){
        printf("%d ", arr3[i]);
    }

    return 0;

}
