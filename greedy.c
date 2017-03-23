#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) 
{
    float amount_due = 0;
    int cents = 0;
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int leftover = 0;
    int coins = 0;
    
    do 
    {
        printf("Please enter the amount of change due: \n");
        amount_due = get_float();
    }
    while(amount_due <= 0);

    cents = (int)round(amount_due * 100);

    quarters = cents / 25;
    leftover = cents % 25;
    
    dimes = leftover / 10;
    leftover = leftover % 10;
    
    nickels = leftover / 5;
    leftover = leftover % 5;
    
    coins = quarters + dimes + nickels + leftover;
    
    printf("%d\n", coins);
    
    return 0;
}