// Calcualte Employee  Bonus
#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if(iYears > 10)
    {
        fBonus = fSalary * 20 / 100;
    }
    else if(iYears >= 5)
    {
        fBonus = fSalary * 10 / 100;
    }
    else
    {
        fBonus = fSalary * 5 / 100;
    }

    printf("Bonus        : Rs. %.2f\n", fBonus);
    printf("Total Salary : Rs. %.2f\n", fSalary + fBonus);

}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of servicev:\n");
    scanf("%f %d",&fSalary ,&iYears);

    CalculateBonus(fSalary,iYears);

    return EXIT_SUCCESS;
}