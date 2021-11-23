#include<stdio.h>
void main()
{
    int n, n_clone, rem, res1, res2;
    
    printf("Enter any number : ");
    scanf("%d",&n);

    n_clone = n;
    while(n!=0)
    {
        rem = n % 10;
        res1 = rem * rem * rem;
        res2 = res2 + res1;
        n = n/10;
    }

    if(res2==n_clone)
        printf("\nNumber is Armstrong.\n");
    else
        printf("\nNot Armstrong\n");

}