//Check voting Eligibility
#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if (iAge >= 18)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    CheckVotingEligibility(iValue);

    return EXIT_SUCCESS;
}