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
    int same = 0;
    for(int i = 0; i < row; i++){
    for(int j = i + 1; j < col; j++){

        if(arr[i][i] == arr[j][j]){
            same = same + 1;
        }

    }
}
if(same == 0){
    printf("diagonal elements are distinct");
}
else{
    printf("diagonal elements are not distinct");
}
return 0;

}
