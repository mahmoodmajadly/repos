// ConsoleApplication24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<stdio.h>

void main()
{
	int a, b,  d,s;
	int arr[5] = { 1,-88,-99,44,2 };
	int c = arr[0];
	for (b = 0; b < 5; b++)
	{
		if (arr[b] > c)
		{
			c = arr[b];
		}
		else 
		{
			s = arr[b] * -1;
			if (s > c)
				c = s;
		}

		for (a = 0; a < 5-1; a++)
		{
			if (arr[a] < 0)
			{
				d = arr[a];
				arr[a] = arr[a + 1];
				arr[a + 1] = d;
			
			}
			
		}
	}
	for (a = 0; a < 5; a++) {
		printf("%d ", arr[a]);
	}
	printf(" \n %d", c);
}
