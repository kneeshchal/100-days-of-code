#include<stdio.h>
int main()
{
    int cost_price, selling_price, profit_loss;
    float profit_loss_percent;

    printf("cost price: ");
    scanf("%d", &cost_price);

    printf("selling price: ");
    scanf("%d", &selling_price);


    profit_loss = selling_price - cost_price;
    profit_loss_percent = (profit_loss * 100.0) / cost_price;


        if(profit_loss > 0){
            printf("profit percent is %f", profit_loss_percent);
        }
        else if (profit_loss < 0){
            printf("loss percent is %.2f", -1 * profit_loss_percent);
        }
        else{printf("neither loss nor profit");
        }
        return 0;
}
