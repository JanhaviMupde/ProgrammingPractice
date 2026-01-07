#include<stdio.h>

int main()
{
    int Arr[4] = { 10, 20, 30,40};
    int Brr[] = {10, 20, 30, 40,50};
    int Crr[6] = { 10, 20, 30};

    printf("Size of Arr is : %d\n",sizeof(Arr));
    printf("Size of Brr is : %d\n",sizeof(Brr));
    printf("Size of Crr is : %d\n",sizeof(Crr));
    
    printf("Size of Crr is : %d\n",(Crr[3])); 

    return 0;
}