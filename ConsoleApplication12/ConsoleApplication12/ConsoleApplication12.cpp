

#include "pch.h"
#include <iostream>
#include<stdio.h>
#include<string.h>
int  fun(int start ,int size)
{
	int temp, left, right;
	int index;
	if ((start + size) > 16)
		return 0xffff;
	temp = ~0;
	left = temp << (start + size);
	right = ((1 << start) - 1);
	temp = left | right;
	return temp;
}
void main()
{
	printf("%x\n", fun(0, 4));
}

