
#include "pch.h"
#include <iostream>
#include<stdio.h>
#define N 4
void main()
{
	int a[N] = { 1,0,3,2 };
	int i;
	i = 1;
	a[i + 1] = a[a[i - 1]];
	printf("\n");
	for (i = 0; i < N; i++)
		printf("%d ", a[i]);
}

