#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("info.txt", "r");

    if(fp == NULL){
        printf("File cannot be accessed");
        return 1;
    }

    int num;
    int sum = 0;
    int count = 0;
    while(fscanf(fp, "%d", &num) == 1){
        sum = sum + num;
        count++;
    }
    if(count != 0)
   {
    float average = (float)sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
   }
   else
  {
    printf("No numbers found in the file.");
  }
    float average;
    average = (float)sum / count;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
    fclose(fp);
    return 0;
}
