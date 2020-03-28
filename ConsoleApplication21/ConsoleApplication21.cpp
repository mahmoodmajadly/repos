

#include "pch.h"
#include <iostream>
#include<string.h>
#include<stdio.h>


void main()
{
	printf("%c%c%c%c%c!\n", "ghi"[1], *("def" + 1), *"abc" + 11, "klm"[1], *"ghi" + 8);
}


