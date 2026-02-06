#include<stdio.h>
//input 
int Factorial(int iNo)
{
    int iCnt = 1;
    int iFact = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter the numbern: ");
    scanf("%d", &iValue);
    
    iRet = Factorial(iValue);
     printf(" factorial is : %d\n",iRet);
     return 0;
}