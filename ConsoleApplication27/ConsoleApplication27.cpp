// ConsoleApplication27.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<stdio.h>
#define N 6
int fun(int vec[], int num)
{
	int a;
	if (num > N - 1)
		return 0;
	a = vec[num];
	if ((num != (N - 1)))
		if ((vec[num] > vec[num + 1]))
			num = N;
	return (a + fun(vec, num + 1));
}

void main()
{
	int vec[N];
	int res, i;
	for (i = 0; i < N; i++)
		vec[i] = i + 1;
  	res = fun(vec, 0);
	printf("%d\n", res);
    
}
