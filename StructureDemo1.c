#include<stdio.h>

struct Demo
{
    int i ;
    float f;
    int j;
};

int main()
{
    struct Demo obj; //memory allocated

    printf("size of demo is : %ld byte\n",sizeof(struct Demo)); //hoe much memory will allocate
    
    printf("size of object is : %ld byte\n",sizeof(obj)); //how much memory is alloceted

    return 0;
}