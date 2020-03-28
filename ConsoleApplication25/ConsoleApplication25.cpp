

#include "pch.h"
#include <iostream>
#include<stdio.h>
#include<string.h>
#define N 10
char fun(char num1,int  num2) {
	int i,j;
	for (i = 0; i < num2; i++)
	{
		j = 1 << 7;
		if (!(num1&j))
			num1 *= 2;
		else
			num1 = (num1 * 2) + 1;
	}
	return num1;

}
void main()
{
	char num = 0x4;
	num = fun(num, 3);
	printf("\n%u\n", num);
}