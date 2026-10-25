#include<stdio.h>
int main()
{
    int row, col;
    printf("enter number of rows: ");
    scanf("%d", &row);
    printf("enter number of columns: ");
    scanf("%d", &col);
    int a[row][col];

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int d = 0; d <= row + col -2; d++){
     if(d % 2 == 0){
        for(int i = row - 1; i >= 0; i--){
            int j = d - i;

     if(j >= 0 && j < col){
    printf("%d ", a[i][j]);
}
        }
     }
     else{
        for(int i = 0; i < row; i++){
            int j = d - i;

    if(j >= 0 && j < col){
    printf("%d ", a[i][j]);
}
        }
     }
    }
    return 0;
}
