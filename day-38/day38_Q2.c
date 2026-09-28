#include<stdio.h>
int main()
{
    int row, col;
    printf("enter number of rows: ");
    scanf("%d", &row);
    printf("enter number of columns: ");
    scanf("%d", &col);

    int arr[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    if(row != col){
        printf("matrix is not symmetric");
    }
    int symmetric = 1;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){

            if(arr[i][j] != arr[j][i]){
                symmetric = 0;
                break;
            }
        }

        if(symmetric == 0){
            break;
        }
    }
    if(symmetric == 1){
        printf("matrix is symmetric");
    }
    else{
        printf("matrix is not symmetric");
    }

    return 0;
}

