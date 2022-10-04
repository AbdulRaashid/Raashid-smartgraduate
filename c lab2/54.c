//program to count the number of digits
#include<stdio.h>
int main()
{
    long n;
    int count=0;
    printf("enter an integer:");
    scanf("%ld",&n);
    do{
        n/=10;
        ++count;
    }while(n!=0);
    printf("number of digits : %d",count);
}
