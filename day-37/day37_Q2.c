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
        int transpose[col][row];
        for(int j = 0; j < col; j++){
            for(int i = 0; i < row; i++){
                transpose[j][i] = arr[i][j];
            }
        }
         for(int j = 0; j < col; j++){
            for(int i = 0; i < row; i++){
                printf("%d ", transpose[j][i]);
            }
         }
         return 0;
    }
