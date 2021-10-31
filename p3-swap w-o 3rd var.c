#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter values for a and b respectively : ");
    scanf("%d %d",&a,&b);
    printf("\nBefore swap : \na = %d , b = %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swap : \na = %d , b = %d\n",a,b);

}