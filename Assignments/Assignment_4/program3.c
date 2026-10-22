//find the greater of two Numbers
#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst , int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("First Number is Greater");
    } 
    else if (iFirst < iSecond)
    {
        printf("Second Number is Greater");

    }
    else
    {
        printf("Both Numbers are Equal");
    }


}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter first Number\n");
    scanf("%d",&iValue1);

    printf("Enter Second  Number\n");
    scanf("%d ",&iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}