#include<stdio.h>
int main()
{
    int m, i;
    printf("Enter number of elements of first array: ");
    scanf("%d", &m);
    int a1[m];
    for(i = 0; i < m; i++){
        scanf("%d", &a1[i]);
    }
    int n, j;
    printf("Enter number of elements of second array: ");
    scanf("%d", &n);
    int a2[n];
    for(j = 0; j < n; j++){
        scanf("%d", &a2[j]);
    }
    int merged[m + n];
    i =0;
    j = 0;
    int k = 0;
    while(i < m && j < n){
        if(a1[i] < a2[j]){
            merged[k] = a1[i];
            i++;
            k++;
        }
        else{
            merged[k] = a2[j];
            j++;
            k++;
        }
    }
    while(i < m){
    merged[k] = a1[i];
    i++;
    k++;
     }

    while(j < n){
    merged[k] = a2[j];
    j++;
    k++;
   }
   for(k = 0; k < m + n; k++){
    printf("%d ", merged[k]);
   }
   return 0;
}
