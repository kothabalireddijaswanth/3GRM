#include<stdio.h>

int main(void)
{
      int a,b,temp;
      
      printf("Enter the a, b values : ");
      scanf("%d %d", &a, &b);
      
      temp=a;
      a=b;
      b=temp;
      
      printf("\r\nAfter exchange a is %d , b is %d\r\n", a,b);
      //getchar();
      
      return 0;
}
     
    
