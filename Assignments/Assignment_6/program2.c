// Check Admission Eligibility
#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks , int iAge)
{
    if((fMarks >= 75) && (iAge >= 18))
    {
        printf("Eligible For Admission");
    }
    else
    {
        printf("Not Eligible");
    }


}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter Marks and Age:\n");
    scanf("%f %d",&fMarks,&iAge);

    CheckAdmission(fMarks,iAge);

    return EXIT_SUCCESS;
}