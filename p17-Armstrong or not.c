#include<stdio.h>
void main()
{
    int n, rem, res1, res2;
    
    printf("Enter any number : ");
    scanf("%d",&n);

    while(n!=0)
    {
        rem = n % 10;
        res1 = rem * rem * rem;
        res2 = res2 + res1;
        n = n/10;
    }

    if(res2==n)
        printf("\nNumber is Armstrong.");
    else
        printf("\nNot Armstrong");

}