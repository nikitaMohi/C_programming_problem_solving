//Calculate Student Table
#include<stdio.h>
#include<stdlib.h>

void DispalyGrade(int iMarks)
{
    if((iMarks <= 100) && (iMarks >=90))
    {
        printf("Greade A");
    }
    else if((iMarks <= 89) && (iMarks >= 75))
    {
        printf("Grade B");
    }
    else if ((iMarks <= 74) &&(iMarks >= 60))
    {
        printf("Grade C");
    }
    else if((iMarks <= 59) && (iMarks >=40))
    {
        printf("Grade D");
    }
    else
    {
        printf("Fail");
    }

}
int main()
{
    int iValue = 0;

    printf("Enter Marks\n");
    scanf("%d",&iValue);

    DispalyGrade(iValue);

    return EXIT_SUCCESS;

}