
#include "pch.h"
#include <iostream>
#include<stdio.h>
#include<string.h>
#define N 10
void main()
{
	int vec[N] = { 1,2,3,4,5,6,7,8,9,-1 };
	int i, j, num;
	i = 0;
	while (vec[i++] + 1)
		printf("%d ", vec[i - 1]);
	printf("\n");
	for (i = 0; i < N; i++)
	{
		for (j = vec[i]; j > 0; j--)
			printf(" ");
		if (!j)
			printf("%d\n", vec[i]);
	}
	num = 0;
	for (i = 0; vec[i] > 0; i++)
	{
		vec[i] += num++;
		vec[i] %= 10;
		printf("%d ", vec[i]);
	}
	printf("\n");
}
