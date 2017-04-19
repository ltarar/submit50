#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

#define a 97
#define A 65
        
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Give 2 arguments\n");
        return 1;
    }

    int k = atoi(argv[1]);
    printf("plaintext: ");
    string p = get_string();
    
    printf("ciphertext: ");
    if( p < 0)
    {
        printf("Enter positive values\n");
        return 1;
    }
    
    else
    {
        
    for(int i = 0 , l = strlen(p); i < l ; i++)
    {
        if (islower(p[i]))
        {
            printf("%c", (((p[i] + k) - a) % 26) + a);
        }
        else if (isupper(p[i]))
        {
            printf("%c", (((p[i] + k) - A) % 26) + A);
        }
        else printf("%c", p[i]);
    }
        printf("\n");
        return 0;
}
}