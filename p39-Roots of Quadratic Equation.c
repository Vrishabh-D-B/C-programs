#include<stdio.h>
#include<math.h>
int main (){
    float root1, root2;
    int a,b,c;

    printf("Enter a,b,c coefficients for the Quadratic Equation : ");
    scanf("%d %d %d",&a,&b,&c);
    root1 = (b + (pow(b*b - 4*a*c,1/2)))/(2*a);
    root2 = (b - (pow(b*b - 4*a*c,1/2)))/(2*a);
    printf("Roots are %.2f and %.2f\n",root1,root2);

}