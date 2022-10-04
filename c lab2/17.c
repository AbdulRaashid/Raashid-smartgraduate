// swap numbers without using temporary variables
#include <stdio.h>
int main(){
  double a,b;
  printf("enter a : ");
  scanf("%lf",&a);
  printf("enter b : ");
  scanf("%lf ",&b);

  //SWAPPING
  a = a - b;
  b = a + b;
  a = b - a;
  printf("After swapping ,a = %.2lf\n",a );
  printf("After swapping ,b = %.2lf\n",b );
  return 0;
}
