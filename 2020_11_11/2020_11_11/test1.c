#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int Triangle(int x, int y, int z)
{
	if ((x == 0)|| (y == 0) || (z == 0))
		return -1;
	else if ((x == y) && (x == z))
		return 1;
	else if ((x == y) || (y == z) || (x == z))
		return 2;
	else
		return 3;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	assert((a, b, c >= 0) && (a, b, c < 1000));
	scanf("%d %d %d", &a, &b, &c);
	int ret = Triangle(a, b, c);
	/*
	else*/ if (ret == 1)
		printf("Equilateral triangle!");
	else if (ret == 2)
		printf("Isosceles triangle!");
	else if(ret == 3)
		printf("Ordinary triangle!");
	else  
		printf("Not a triangle!");
	return 0;
}