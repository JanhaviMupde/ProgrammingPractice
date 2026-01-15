#include<stdio.h>
void DisplayPrice (int iAge)
{
    if((iAge < 0) || (iAge > 5))
    {
        printf("Ticket is free\n");
        return;
    }
    if(( iAge >= 5) && (iAge < 18))
    {
        printf("price is 700\n");
    }
    else if((iAge >= 18) && (iAge < 50))
    {
        printf(" Ticket price is 999");
    }
    else if((iAge >= 50))
    {
        printf(" price is 500");
    }
}
int main()
{
    int iValue = 0;
    printf("Please enter your age :");
    scanf("%d",&iValue);
    DisplayPrice(iValue);
    return 0;
}


