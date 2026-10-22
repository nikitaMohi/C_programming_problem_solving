// find the Greatest of Three Numbers
#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iFirst , int iSecond, int iThree)
{
    if((iFirst > iSecond) && (iFirst > iThree))
    {
        printf("First Number is Greatest");
    }
    else if((iSecond > iFirst ) && (iSecond > iThree))
    {
        printf("Second Number is Greatest");
    }

    else
    {
        printf("Third Number is Greatest");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter three Numbers\n");
    scanf("%d %d %d", &iValue1 , &iValue2, &iValue3);

    FindGreatest(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;
}