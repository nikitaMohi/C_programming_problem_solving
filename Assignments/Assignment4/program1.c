//Check whetehr number is positive or negative
#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue >=1)
    {
        printf("Numbe is Positive\n");
    }

    else if(iValue < 0)
    {
        printf("Number is Negative\n");

    }
    else
    {
        printf("Number is Zero\n");
    }

}
int main()
{
    int iValue = 0;

    printf("Enter a Number\n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;

}