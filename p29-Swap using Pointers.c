#include<stdio.h>

int main ()
{
    int num1, num2;

    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);

    int *x = &num1;
    int *y = &num2;
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("After Swap : num1 = %d, num2 = %d\n",num1,num2);

    return 0;
}