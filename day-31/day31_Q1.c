#include<stdio.h>
int main()
{
    int n, i, k, found = 0;
    printf("enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int a;
    printf("enter value to be found: ");
    scanf("%d", &a);
    for(k = 0; k < n; k++){

        if(arr[k] == a){
            found = found + 1;
        }
    }
            if(found > 0){
            printf("value is found");
        }
        else{
            printf("value is not found");
        }
        return 0;

}
