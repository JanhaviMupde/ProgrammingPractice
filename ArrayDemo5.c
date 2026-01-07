#include<stdio.h>

int main()
{
    double Arr[] = {10.0, 20.0, 30.0, 40.0};

    printf("size of Arr : %d\n",sizeof(Arr));       //32

    Arr++; // error: can't update base address
    
    
    return 0;
}