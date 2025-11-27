#include<stdio.h>
void change(int(*ten));
int main()
{
	int ten[10] = { 0 }, i;
	print("please enter nine numbers: ");
	for (i = 0; i < 9; i++)
	{
		scanf("%d", &ten[i]);
	}
	print("please add number: ");
("%d", &ten[9]);
	change(ten);
}
void change(int(*ten))
{
	for (int n = 0; n < 9; n++)
	{
		for (int i = 0; i < 9 - n; i++)
		{
			if (ten[i] > ten[i + 1])
			{
				 int o = ten[i];
				ten[i] = ten[i + 1];
				ten[i + 1] = o;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		print("%d\t", ten[i]);
	}
	return 0;