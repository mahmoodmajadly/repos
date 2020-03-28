// ConsoleApplication28.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int sum(int *pnt_x, int *pnt_y)
{
	int i;
	*(pnt_y) = *(pnt_x);
	for (i = 1; i < 10; i++)
	{
		*(pnt_y + i) = *(pnt_y + i - 1) + *(pnt_x + i);
	}
	
}


void main()
{
	int a;

	int x[10] = { 6,2,8,12,0,3,2,0,6,1 };
	int y[10];
	a=sum(x, y);
	//printf("%d\n", a);
}