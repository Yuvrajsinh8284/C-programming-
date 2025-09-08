
#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter value:a");
    scanf("%d\n",&a);
    printf("enter value:b");
    scanf("%d\n",&b);
    printf("enter value:c");
    scanf("%d\n",&c);
    if (a>=b && a>=c)
    {
        printf("largest value:%d\n",a);
    }
    else if (b>=a && b>=c)
    {
        printf("largest value:%d\n",b);
    }
    else
    {
        printf("largest value:%d\n ",c);
    }
    if (a<=b && a<=c)
    {
      printf("smallest value:%d\n",a);
    }
    else if ( b<=a && b<=c)
    {
      printf("smallest value:%d\n",b);
    }
    else
    {
      printf("smallest value:%d\n",c);
     }
    return 0;
  }
