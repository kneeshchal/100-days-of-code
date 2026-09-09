#include <stdio.h>
int main()
{
    int units, bill;

    printf("units of electricity used: ");
    scanf("%d", &units);

    if(units <= 100)
{
    bill = units * 5;
    printf("bill is rs %d", bill);
}
else if(units <= 200)
{
    bill = (100 * 5) + (units - 100) * 7;
     printf("bill is rs %d", bill);
}
else if(units <= 300)
{
    bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
     printf("bill is rs %d", bill);
}
else
{
    bill = (100 * 5) + (100 * 7) + (100 * 10)
           + (units - 300) * 12;
            printf("bill is rs %d", bill);
}

return 0;
}
