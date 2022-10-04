
//power of a number using while loop
#include<stdio.h>
int main()
{
    int base,exp;
    long double result;
    printf("enter a base number: ");
    scanf("%d",&base);
    printf("enter an exponent: ");
    scanf("%d",&exp);
    while(exp != 0)
    {
       result = base*exp;
       --exp;
    }
    printf("Answer = %.0Lf",result);
    return 0;
}
//doubt program not working
