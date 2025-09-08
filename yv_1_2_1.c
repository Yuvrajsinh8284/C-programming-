
#include <stdio.h>

int main() {
    int a,b;
    printf("enter value:a");
    scanf("%d\n",&a);
    printf("enter value:b");
    scanf("%d\n",&b);
    if (a>b)
    {
        printf("largest value:%d\n",a);
        printf("smallest value:%d\n",b);
    }
    else if (b>a)
    {
        printf("largest value:%d\n",b);
        printf("smallest value:%d\n",a);
    }
    else
    {
        printf("both are equal ");
    }

    return 0;
  }
