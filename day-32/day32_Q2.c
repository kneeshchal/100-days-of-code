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
    int maxCount = 0;
        int mostFrequent = arr[0];
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count = count + 1;
            }
        }
        if(count > maxCount){
            maxCount = count;
            mostFrequent = arr[i];
        }



    }
    printf("most occuring element is %d", mostFrequent);
    return 0;
}
