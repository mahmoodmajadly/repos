// ConsoleApplication19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<stdio.h>
void main()
{
	int x, y, z;
	printf("enter wage");
	scanf("%d", &x);
	printf("enter hour");
	scanf("%d", &y);
	printf("enter days");
	scanf("%d", &z);
	x *= y;
	z *= x;
	printf("your salary is:%d", z);
}
