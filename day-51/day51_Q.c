#include<stdio.h>
int main()
{
    int n;
    printf("enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",& arr[i]);
    }
    int target;
    printf("enter number to be found: ");
    scanf("%d", &target);
    int first = -1;
    int last = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            if(first == -1){
                first = i;
            }
            last = i;
        }
    }
    printf("first and last occurence of %d is %d and %d", target, first, last);
    return 0;

}
