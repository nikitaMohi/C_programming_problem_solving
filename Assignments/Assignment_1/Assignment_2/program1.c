//Accept one Number from user and print that number of *on screen
#include<stdio.h>

void Display(int iNo)
{
    int icnt = 0;
    while(icnt<= iNo)
    {
        printf("*");
        icnt++;
    }
}

int main()
{
    int iValue =0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}