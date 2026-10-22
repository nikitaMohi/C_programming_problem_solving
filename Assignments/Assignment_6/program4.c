// Check Triangle Validity
#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{

    if((iSide1 > 0) && (iSide2 > 0) && (iSide3 > 0) &&
       ((iSide1 + iSide2 + iSide3) == 180))
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Not a Valid Triangle\n");
    }

}

int main()
{
    int iSide1 =0, iSide2 = 0, iSide3 = 0;

    printf("Enter three Sides:\n");
    scanf("%d %d %d",&iSide1,&iSide2,&iSide3);

    CheckTriangle(iSide1,iSide2,iSide3);

    return EXIT_SUCCESS;
}