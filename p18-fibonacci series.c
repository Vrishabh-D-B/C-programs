#include<stdio.h>
void main()
{
    int n, n1, n2, n3, i;

    printf("\tEnter any number : ");
    scanf("%d",&n);

    n1 = 0;
    n2 = 1;
    printf("\t%d %d ",n1,n2);
    for(i=2;i<n;i++)
    {
        n3 = n1 + n2;
        printf("\t%d ",n3);
        n1 = n2;
        n2 = n3;
    }
    printf("\n");
}
