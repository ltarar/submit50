#include <cs50.h>
#include <stdio.h>

int main(void) 

{
    int minutes;
    int bottles;
    
    do 
    {
        printf("Please enter the of minutes you took for shower: \n");
        minutes = get_int();
      
    } 
    while (minutes < 0);

    bottles = minutes * 12;
     printf("%i number of bottles used\n", bottles);
}