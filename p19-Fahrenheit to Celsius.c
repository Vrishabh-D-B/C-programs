#include<stdio.h>
void main()
{
    float F, C;

    printf("Enter Temperature in Fahrenheit : ");
    scanf("%f",&F);
    C = (F-32)*5/9;
    printf("\nTemperature in Celsius : %.2f \n",C);
}