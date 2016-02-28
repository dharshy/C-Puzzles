#include<stdio.h>
/*This program is to test signed char and unsigned char*/
/*The value 291 is assigned to a char,char by default is 
signed char and the range is -127 to +127.The value 291 exceeds +127
so a value from the other side is picked up and stored into a*/


int main()
	{
	 char a = 291;
	 printf("\n%d %c\n",a,a);
	 return 0;
	}
