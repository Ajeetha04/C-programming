#include <stdio.h>
int main()
{
	int num1 = 2, num2 = 4;
	num1 = num1 + num2; 
	num2 = num1 - num2;
	num1 = num1 - num2; 

	printf("num1 = %d\nnum2 = %d", num1, num2);

}
