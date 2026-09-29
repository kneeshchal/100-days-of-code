#include<stdio.h>
int main()
{
    int row, col;
    printf("enter number of row: ");
    scanf("%d", &row);
    printf("enter number of columns: ");
    scanf("%d", &col);

    int arr[row][col];

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int sum = 0;
    for(int i = 0; i < row; i++){
            sum +=  arr[i][i];
    }
    printf("sum of diagonal elemenets are %d", sum);
    return 0;
}
