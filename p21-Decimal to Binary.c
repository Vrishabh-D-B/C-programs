#include<stdio.h>
void main()
{
    int i=0, n, j;
    int a[10];

    printf("Enter any number : ");
    scanf("%d",&n);

    while(n>0)
    {
        a[i] = n%2;
        n = n/2;
        i++;
    }

    for(j=i-1;j>=0;j--)
        printf("%d",a[j]);
    printf("\n");
}
