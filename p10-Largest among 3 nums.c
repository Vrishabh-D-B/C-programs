#include<stdio.h>
void main()
{
    int num1, num2, num3;
    printf("Enter any three numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1 > num2)
    {
        if(num1 > num3)
            printf("%d is Largest \n",num1);
        else
            printf("%d is Largest \n",num3);
    }
    else
    {
        if(num2 > num3)
            printf("%d is Largest \n",num2);
        else
            printf("%d is Largest \n",num3);
    }
}