#include<stdio.h>
void main()
{
    int num1,num2,sum,sub,mul,ch;
    float div;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);
    printf("Select operation \n1-> Addition\n2-> Subtraction\n3-> Multiplication\n4-> Division\n **Enter an integer choice from 1-4**: ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        sum = num1 + num2;
        printf("\nAddition = %d \n",sum);
        break;
    case 2:
        sub = num1 - num2;
        printf("\nSubtraction = %d \n",sub);
        break;
    case 3:
        mul = num1 * num2;
        printf("\nMultiplication = %d \n",mul);
        break;
    case 4:
        if(num2 == 0)
            {
                printf("\nDivisor cannot be 0, try again \n");
            }
        else
            {
                div = (float) num1 / num2;
                printf("\nDivision = %f \n",div);

            }
        break;
    default:
        printf("\nInvalid choice, try again \n");
        break;
    }
}