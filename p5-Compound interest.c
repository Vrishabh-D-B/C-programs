#include<stdio.h>
#include<math.h>
void main()
{
    float Ci,P,r,t;
    printf("Enter value for Principle amount : ");
    scanf("%f",&P);
    printf("Enter value for Interest rate : ");
    scanf("%f",&r);
    printf("Enter value for Time : ");
    scanf("%f",&t);
    Ci = P * pow((1 + r/100),t) - P ;
    printf("Compound Interest will be : %.2f \n",Ci);
}
// Enter this command in terminal to run
//gcc p5-Compound\ interest.c -o p5-Compound\ interest -lm 
// ./p5-Compound\ interest