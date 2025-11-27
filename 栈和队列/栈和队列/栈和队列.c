#include<stdio.h>
#define nums 100
typedef int new;
typedef struct
{
	new arr[nums];
	new length;
}nope;
int ini(nope* l)
{
	l->length = -1;
	return 1;
}
int zero(nope *l)
{
	if (l->length == -1)
	{
		printf("without\n");
		return 1;
	}
	else
	{
		return 0;
	}
}
int intput(nope* l, int n)
{
	if (l->length >= nums - 1)
	{
		printf("over\n");
		return 0;
	}
	l->length++;
	l->arr[l->length] = n;
	return 1;
}
int delete(nope* l,new *n)
{
	if (l->length == -1)
	{
		printf("without num");
		return 0;
	}
	*n = l->arr[l->length];
	l->length--;
	return 1;
}
int get(nope* l, new* n)
{
	if (l->length == -1)
	{
		printf("without num");
		return 0;
	}
	*n = l->arr[l->length];
	return 1;
}
int main()
{
	nope list;
	new n,e;
	ini(&list);
	zero(&list);
	intput(&list, 5);
	delete(&list,&n);
	get(&list, &e);
	printf("%d\n", n);
	printf("%d\n", e);
}