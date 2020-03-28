

#include "pch.h"
#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct stde
{
	int avg;
	struct stde * next;
}stde;
int funAvg(stde*head)
{
	stde *p;
	int cnt = 0, sum = 0;
	p = head;
	sum += p->avg;
	cnt++;
	p = p->next;
	while (p != head && p) {
		sum += p->avg;
		cnt++;
		p = p->next;
	}

	return sum / cnt;
}
void main()
{ 
	struct  stde * head,*soof,*news;
	stde * p;
	int a;
	head = (struct  stde *)malloc(sizeof(struct  stde));
	if (head != NULL)
	{
		soof = head;
		soof->next = NULL;
		scanf("%d", &soof->avg);
		for (int i = 0; i < 3; i++)
		{
			news = (struct  stde *)malloc(sizeof(struct  stde));
			if (news != NULL)
			{
				soof->next = news;
				news->next = NULL;
				scanf("%d", &news->avg);
				soof = soof->next;
			}
		}
		a=funAvg(head);
		printf("the avg is : %d\n", a);
		/*p = head;
		while (p)
		{
			printf("%d\n", p->avg);
			p = p->next;
		}*/

	}
}
