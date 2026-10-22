// write a program which accepts one number from user and print that number of even numbers on screen
/*
    Input: 7

    Output :2   4   6   8   10  12  14
*/
#include<stdio.h>

void PrintEven(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        return;
    }
    for(i=1; i<=iNo; i++)
    {
    
        printf("%d\t",i*2);
           
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;

}
