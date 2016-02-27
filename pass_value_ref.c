#include<stdio.h>
int add_passbyvalue(int x);
int add_passbyrefernce(int *x);
int main()
	{
	 int x = 10;
	 printf("value of X in Main %d\n",x);
	 x = add_passbyvalue(x);
	 printf("value of X in Main after pass by value%d\n",x);	 
	 add_passbyreference(&x);
	 printf("value of X in Main after function calls%d\n\n",x);
	}
int add_passbyvalue(int x)
	{
	  x = x+x;
	  printf("The value of X inside passbyvalue\n");
	  printf("value of x is %d\n\n",x);
	  return x;
	}
int add_passbyreference(int *x)
	{
	 *x= *x - *x;
	 int y = *x +*x + 5;
	 puts("The value of x inside passbyreference\n");
	 printf("value of x is %d\n\n",*x);
	 printf("value of y inside passbyreference is %d\n",y);
	}
