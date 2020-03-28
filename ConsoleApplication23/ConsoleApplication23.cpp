// ConsoleApplication23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<stdio.h>

void main()
{
	int a = 7, b = 8;
	if (a&b)
		printf("tea\n");
	if ((-a & 0xf) == 9)
		printf("Coffee\n");
}

