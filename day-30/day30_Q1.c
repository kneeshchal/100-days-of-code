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
    int even = 0;
    int odd = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            even++;

        }
        else{
            odd++;
        }

    }
    printf(" even and odd numbers are %d and %d", even, odd);
    return 0;
}
