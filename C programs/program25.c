#include<stdio.h>
//input 5
// 1+2+3+4+5
int Summation(int iNo)
{
    int iCnt =0;
    int iSum = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter the numbern: ");
    scanf("%d", &iValue);
    
    iRet = Summation(iValue);
     printf(" sum is : %d\n",iRet);
     return 0;
}