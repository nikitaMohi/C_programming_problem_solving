#include<stdio.h>

    int Divide(int iNo1, int iNo2)
    {
        int iAns = 0;
        if(iNo2 == 0)
        {
            return -1;

        }

        iAns = iNo1/iNo2;

        return 0;
    }

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter the First Number \n");
    scanf("%d",&iValue1);

    printf("Enter the second Number \n");
    scanf("%d",&iValue2);


    iRet =Divide(iValue1,iValue2);

    printf("Division is %d", iRet);

    return 0;


}