#include<stdio.h>
void main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    if(n>=1 && n<=7)
        {
            printf("Entered number is a week number \n");
            switch(n)
            {
                case 1:
                    printf("Day = Monday \n");
                    break;
                case 2:
                    printf("Day = Tuesday \n");
                    break;
                case 3:
                    printf("Day = Wednesday \n");
                    break;
                case 4:
                    printf("Day = Thursday \n");
                    break;
                case 5:
                    printf("Day = Friday \n");
                    break;
                case 6:
                    printf("Day = Satuarday \n");
                    break;
                case 7:
                    printf("Day = Sunday \n");
                    break;
            }
        }
    else
        printf("Entered number is NOT a week number \n");
}