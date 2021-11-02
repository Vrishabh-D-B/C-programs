#include<stdio.h>
void main()
{
    int i, n,sum=0;
    printf("Enter value for n : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        sum = sum + i+1;
    printf("Sum = %d \n",sum);
}