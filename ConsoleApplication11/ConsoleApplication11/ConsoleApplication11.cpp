
#include "pch.h"
#include <iostream>
#include<stdio.h>
#define N 15

void main()
{
	int vec[N] = { 1,3,5,7,9,8,1,4,5,8,9,10,5,3,-1 };
	int i, j, k;
	for (i = 0; vec[i] != -1; i++)
		for (j = i + 1; vec[j] != -1; j++)
			if (vec[i] == vec[j])
				vec[j] = -2;

	for (i = 0, j = 0; vec[i] != -1; i++, j++)
	{
		if (vec[i] == -2)
			i++;
		vec[j] = vec[i];
		if (vec[j] == -2)
			j--;
	}
	vec[j] = -1;
	printf("\n\n the complet new victor is:\n");
	for (i = 0; i < N; i++)
		printf("%d ", vec[i]);
	printf("\n\nthe new victor is:\n");
	for (i = 0; vec[i] != -1; i++)
		printf("%d ", vec[i]);

}


