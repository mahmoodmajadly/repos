
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
int funmax(stde * head)
{
	if (head != NULL)
	{
		stde * p;
		p = head;
		int max =head->avg;
		p = p->next;
		while (p != head && p) {
			if (p->avg > max)
				max = p->avg;
			p = p->next;

		}
		return max;
	}
	return NULL;
}
int funmin(stde * head)
{
	stde *p;
	p = head;
	int min =p->avg;
	p = p->next;
	if (head != NULL)
	{
		while (p != head && p) {
			if (p->avg < min)
				min = p->avg;
			p = p->next;
		}
		return min;

	}
	return -1;
}
void funadd(stde * head, int num,int avg) {
	int cnt = 0;
	stde *p, *n;
	p = head;
	while (p)
	{
		if (cnt == num)
		{
			break;
		}
		cnt++;
		p = p->next;
	}
	n = (stde *)malloc(sizeof(stde));
	n->next = NULL;
	n->avg = avg;
	n->next = p->next;
	p->next = n;

}
void funprint(stde *head)
{
	stde *p;
	p = head;
	while (p)
	{
		printf("%d\n",  p->avg);
		p = p->next;

	}
}
stde * fundelet(stde *head, int num,int num2)
{
	stde *p = head, *d = NULL;
	if (head->avg == num)
	{
		p = head;
		head = head->next;
		free(p);
		return head;
	}
	while (p)
	{
		if (p->avg == num&&num2)
		{
			d = p;
			break;
		}
		p = p->next;
	}
	p = head;
	while (p->next != d)
		p = p->next;
	p->next = d->next;
	free(d);
	return head;
}
void main()
{
	struct  stde * head, *soof, *news;
	stde * p;
	int avg, max, min, del;
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
		avg = funAvg(head);
		max = funmax(head);
		min = funmin(head);
		
		printf("the avg is : %d\n", avg);
		printf("the big is : %d\n", max);
		printf("the min is : %d\n", min);

		printf("---------------\n");
		funadd(head, 1, 5);

		funprint(head);

		printf("---------------\n");
		 fundelet(head, 2,4);

		funprint(head);
		/*p = head;
		while (p)
		{
			printf("%d\n", p->avg);
			p = p->next;
		}*/

	}
}
