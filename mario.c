#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0;
    int row = 0;
    int space = 0;
    int hash = 0;
    
    do
    {
       printf("Please enter a number between 0 to 23 for pyramid height:\n");
        height = get_int();

    }
    while (height < 0 || height > 23);
    
    for(row = 0; row < height; row++)
    {
        
         for(space = 0; space < height-row-1; space++)
        {
        printf("%s", " ");
        }
        
        for(hash = 0; hash < row+2; hash++)
        {
             printf("#");
        }
      printf("\n");
    }
    return 0;
}
