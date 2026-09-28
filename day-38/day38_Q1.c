#include<stdio.h>
int main()
{
    int r1, c1;
    printf("enter number of rows: ");
    scanf("%d", &r1);

    printf("enter number of columns: ");
    scanf("%d", &c1);

    int arr1[r1][c1], arr2[r1][c1];

    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            scanf("%d", &arr1[i][j]);
        }

    }
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            scanf("%d", &arr2[i][j]);
        }

    }
    int arr3[r1][c1];
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    return 0;

}
