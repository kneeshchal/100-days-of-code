#include<stdio.h>
int main()
{
    int row, col;
    printf("enter number of rows: ");
    scanf("%d", &row);

    printf("enter number of column: ");
    scanf("%d", &col);

    int arr[row][col];

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    int sum[row];
    for(int i = 0; i < row; i++){
        sum[i] = 0;
        for(int j = 0; j < col; j++){
            sum[i] = sum[i] + arr[i][j];
        }
    }
    for(int i = 0; i < row; i++){
        printf("%d ", sum[i]);
    }
    return 0;

}
