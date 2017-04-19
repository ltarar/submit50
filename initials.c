#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)

{
    string full_name = get_string();
    printf("%c", toupper(full_name[0]));
    for(int i = 0, j = strlen(full_name); i < j; i++)
    {
        if(full_name[i] == ' ')
        {
            printf("%c", toupper(full_name[i+1]));
        }
    }
    
    printf("\n");
}