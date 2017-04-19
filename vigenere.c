#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>

#define a 97
#define A 65

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Enter 2 arguments");
        return 1;
    }
    else 
    {
        for(int i = 0, length = strlen(argv[1]); i < length; i++)
        {
            if(!isalpha(argv[1][i]))
            {
                printf("Enter alphabetic key\n");
                return 1;
            }
        }
    }        
    
    string key = argv[1];
    printf("plaintext: ");
    string ptext = get_string();
    printf("ciphertext: ");
    
    for ( int i = 0, j = 0, length = strlen(ptext) ; i < length ; i++)
    {
        int k = tolower(key[j % strlen(key)]) - a ;
        
        if(isupper(ptext[i]))
        {
            printf("%c", (((ptext[i] + k) - A) % 26) + A);
            j++;
        }
        else if(islower(ptext[i]))
        {
            printf("%c", (((ptext[i] + k) - a) % 26 ) + a);
            j++;
        }
        else 
        {
            printf("%c", ptext[i]);
        }
    }     
    printf("\n");
    return 0;
}        
