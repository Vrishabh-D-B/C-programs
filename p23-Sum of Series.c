#include<stdio.h>
int fact(int x)
{
    if(x<=1)
        return 1;
    else
        return x*fact(x-1);
}
void main()
{
    int n,f=0,i;
    printf("Enter any number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        f=f+fact(i);
        if(i==n)
            printf("%d!",i);
        else
            printf("%d! +  ",i);
    }   
    printf("\nSum of series = %d\n",f);
    
}