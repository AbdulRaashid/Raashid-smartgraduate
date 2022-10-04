//goto statement

#include<stdio.h>
int main()
{

    const int max=100;
    int i;
    double number,avg,sum=0.0;
    for(i=1;i<=max;i++){
        printf("%d . enter a number ",i);
        scanf("%lf",&number);
        if(number<0.0)
        {
            goto jump;
        }
        sum += number;
    }
    jump:
        avg=sum/(i-1);
        printf("sum = %.2lf\n",sum);
        printf("average = %.2lf",avg);
}
