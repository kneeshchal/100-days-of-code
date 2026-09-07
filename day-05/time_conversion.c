#include<stdio.h>
int main()
{
    int total_seconds, seconds, minutes, hours;

    printf("provide total seconds: ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    printf("time in HH:MM:SS format is %d:%d:%d", hours, minutes, seconds);
    return 0;

}
