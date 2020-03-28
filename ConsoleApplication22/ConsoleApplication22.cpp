
#include "pch.h"
#include <iostream>
#include<stdio.h>

void main()
{
	int n, i;
	long mult, from = 1, to, sum, temp, cnt = 0;
	printf("Enter the number: ");
	scanf("%d", &n);
	for (i = 1; i < n; i++)
		from *= 10;
	to = from * 10;
	for (; from < to; from++)
	{
		temp = from;
		sum = 0;
		do
		{
			mult = 1;
			mult = pow(temp % 10, n);
			sum += mult;
			temp /= 10;
		} while (temp > 0);
		if (sum == from)
		{
			printf("%ld \n", sum);
			cnt++;
		}
	}
	if (!cnt)
		printf("No such number\n");
}


