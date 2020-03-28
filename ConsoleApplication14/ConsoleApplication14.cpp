
#include "pch.h"
#include <iostream>
#include<stdio.h>
#include<string.h>
#define N 4
void fun(char *str)
{
	int i, cnt = 0;
	for (i = 0; str[i] != 0; i++)
		if (str[i] == '0'&&str[i + 1])
			i++;
		else if (str[i] > '0'&&str[i] <= '9'&&str[i + 1])
		{
			for (cnt = 0; cnt < (str[i] - '0'); cnt++)
				printf("%c", str[i + 1]);
			i++;
		}
		else
			printf("%c", str[i]);
	printf("\n");
}
void main()
{
	char str[] = "1123";
	printf("%s\n", str);
	fun(str);
}
