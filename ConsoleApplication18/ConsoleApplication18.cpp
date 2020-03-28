// ConsoleApplication18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<stdio.h>
void main()
{
	int x, y;
	x = 1, y = 3;
	y = ++x + x * y + -y;
	printf("%d\n", y);
}
