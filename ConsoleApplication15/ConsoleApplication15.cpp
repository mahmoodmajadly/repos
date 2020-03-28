

#include "pch.h"
#include <iostream>
#include<stdio.h>
#include<string.h>
void fun(char *s,char c)
{
	char *ptr;
	ptr = s;
	while (*s)
	{
		if (*s != c)
		{
			*ptr = *s;
			ptr++;
		}
		s++;
	}
	*ptr = 0;
	return;
}
void main()
{
	char str[10] = "morning";
	fun(str, 'n');
	printf("\n\n%s\n", str);
	
}

