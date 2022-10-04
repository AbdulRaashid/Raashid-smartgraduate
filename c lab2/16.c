//swap two numbers
#include <stdio.h>
int main()
{
    double first,second,temp;
    printf("Enter the first number : ");
    scanf("%lf",&first);
    printf("enter the second number");
    scanf("%lf",&second);

    temp=first;//value of first is assinged to temp
    first=second;//value of second is assigned to first
    second=temp;//value of temp(inital value of first) is assigned to second

    //%.2lf dispalys number upto 2 decimal points
    printf("\n after swapping first number = %.2lf\n",first);
    printf("\n after swapping second number = %.2lf\n",second);
    return 0;

}
