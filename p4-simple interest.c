#include<stdio.h>
void main()
{
    float Si,P,r,t;
    printf("Enter value for Principle amount : ");
    scanf("%f",&P);
    printf("Enter value for Interest rate : ");
    scanf("%f",&r);
    printf("Enter value for Time : ");
    scanf("%f",&t);
    Si = P*r*t;
    printf("Simple Interest will be : %.2f \n",Si);
}