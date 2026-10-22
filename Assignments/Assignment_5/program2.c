//Check Leap year
#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if(( iYear % 4 == 0) && (iYear % 100 != 0))
    {
        printf("It is Leap Year");
    }
     else
    {
        printf("It is Not a Leap year");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Year\n");
    scanf("%d",&iValue);

    CheckLeapYear(iValue);

    return EXIT_SUCCESS;

}