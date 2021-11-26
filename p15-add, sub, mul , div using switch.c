#include<stdio.h>
void main()
{
    int num1,num2,sum,sub,mul,ch;
    float div;
    printf("\tEnter two numbers : ");
    scanf("%d %d",&num1,&num2);
    printf("\tSelect operation \n1-> Addition\n2-> Subtraction\n3-> Multiplication\n4-> Division\n **Enter an integer choice from 1-4**: ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        sum = num1 + num2;
        printf("\n\tAddition = %d \n",sum);
        break;
    case 2:
        sub = num1 - num2;
        printf("\n\tSubtraction = %d \n",sub);
        break;
    case 3:
        mul = num1 * num2;
        printf("\n\tMultiplication = %d \n",mul);
        break;
    case 4:
        if(num2 == 0)
            {
                printf("\n\tDivisor cannot be 0, try again \n");
            }
        else
            {
                div = (float) num1 / num2;
                printf("\n\tDivision = %f \n",div);

            }
        break;
    default:
        printf("\n\tInvalid choice, try again \n");
        break;
    }
}