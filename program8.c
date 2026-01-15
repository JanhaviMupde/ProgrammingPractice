/*
Start
    Accept age from the user
        If age is less than 5 then there is no ticket
        If it is between 5-18 then ticket is 
*/


#include<stdio.h>
#define ERR_INVALID_AGE - 1
int CalculateTicket (int iAge)
{
    int iPrice = 0;
    if((iAge < 0))
    {
        return ERR_INVALID_AGE;
    }
    
    if((iAge >= 0) || (iAge <= 5))
    {
        iPrice = 0;
    }
    else if(( iAge > 5) && (iAge <= 18))
    {
        iPrice = 700;
    }
    else if((iAge >= 18) && (iAge < 50))
    {
        iPrice = 999;
    }
    else if((iAge >= 50))
    {
        iPrice = 500;
    }
        return iPrice;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Please enter your age :");
    scanf("%d",&iValue);
    iRet = CalculateTicket(iValue);
    if(iRet == ERR_INVALID_AGE)
    {
        printf("Unable to calculate the ticket price as a age is invalid");
    }
    else
    {
        printf(" Your ticket price is : ");
    
    }
        return 0;
}


