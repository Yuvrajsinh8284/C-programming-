#include<stdio.h>
int main()
{
  float a,x,y,z;
  printf("enter the value of principle amount,rate of interest and time in years\n");
  scanf("%f%f%f\n",&x,&y,&z);
  a=(x*y*z) /100.000;
  printf("interest amount=%f\n",a);
  return 0;
}