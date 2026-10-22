//check Divisibility by 3 and 5
#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if((iValue % 3 == 0) && (iValue % 5 == 0))
    {
        printf("Divisible by 3 and 5");
    }
    else
    {
        printf("Not Divivsible by 3 and 5");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);
    return EXIT_SUCCESS;
}