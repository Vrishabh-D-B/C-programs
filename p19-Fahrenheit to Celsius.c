#include<stdio.h>
void main()
{
    float F, C;

    printf("\tEnter Temperature in Fahrenheit : ");
    scanf("%f",&F);
    C = (F-32)*5/9;
    printf("\tTemperature in Celsius : %.2f \n",C);
}