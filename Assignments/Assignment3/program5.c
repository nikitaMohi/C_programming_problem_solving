// accept on character from user and check whether that character is vowel(a ,e,i,o,u)or not
/*
    Input : E       Output : TRUE

    Input : d       Output: FALSE
*/

#include<stdio.h>

typedef int BOOL;

# define TRUE 1
# define FALSE 0

BOOL ChkVowel(char cVowel)
{
      if((cVowel == 'a') || (cVowel == 'e') || (cVowel == 'i') || (cVowel == 'o') || (cVowel == 'u') ||
       (cVowel == 'A') || (cVowel == 'E') || (cVowel == 'I') || (cVowel == 'O') || (cVowel == 'U'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE ;

    printf("Enter Character\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if (bRet == cValue)
    {
        printf("It is Vowel");

    }
    else
    {
        printf("It is not Vowel");
    }
    return 0;

}