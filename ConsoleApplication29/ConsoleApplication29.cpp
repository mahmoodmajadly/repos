

#include "pch.h"
#include <iostream>
#include<stdio.h>
#define N 3
void fun(int mat1[N][N],int mat2[2*N][2 * N],int x,int y)

{
	
	int i, j;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			if (!mat2[x + i][y + j])
				mat2[x + i][y + j] = mat1[i][j];
			else
				mat2[x + i][y + j] += mat1[i][j];

	
}

void main()
{
	int i, j;
	int mat[N][N];
	int big_mat[2 * N][2 * N] = { 0 };
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (i == 0) mat[i][j] = j + 1;
			else if (i == (N - 1)) mat[i][j] = N - j + 1;
			else mat[i][j] = i + j + 1;
		}
	}
	fun(mat, big_mat, 0, 0);
	fun(mat, big_mat, N, N);
	fun(mat, big_mat, N/2, N/2);



	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (big_mat[i][j]) printf("%d", big_mat[i][j]);
			else printf(" ");
		}
		printf("\n");
	}

}
