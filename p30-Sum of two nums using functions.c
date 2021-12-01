#include<stdio.h>
void sum(int x, int y)
{
    printf("Sum = %d \n",x+y);
}

int main()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}