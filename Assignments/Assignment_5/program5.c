// Identify Character type
#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("UpperCase");
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("LowerCase");
    }
    else if((cValue >= '0') && (cValue <= '9'))
    {
        printf("Digits");

    }
    else
    {
        printf("Symbols");
    }
    
}

int main()
{
    int cValue = '\0';

    printf("Enter a Character \n");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);
    
    return EXIT_SUCCESS;

}