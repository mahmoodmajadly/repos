// ConsoleApplication20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<stdio.h>
int g(int a, int b)
{
	int c;
	if (a > b)
	{
		c = a;
		a = b;
		b = c;
	}
	return a;
}
void main()
{
	int a = 9, b = 3, c;
	int x[] = { 10,5 }, y[] = { 7,4 };
	c = g(a, b);
	printf("%d %d %d\n", a, b, c);

}