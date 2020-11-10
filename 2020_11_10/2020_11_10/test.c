#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//	fib(8);
//	printf("%d", cnt);  //67
//}




#include<stdio.h>
//int main()
//{
//	int x = 1;
//	do {
//		printf("%2d\n", x++);
//	} while (x--);
//  return 0;
//	//陷入死循环
//}




//int main()
//{
//	int i = 10;
//	int j = 20;
//	int k = 3;
//	k *= i + j;
////90,因为+的优先级大于*=
//	return 0;
//}
////

//
////求最小公倍数_1
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = a;
//	while (1)
//	{
//		if (i % a == 0 && i % b == 0)
//		{
//			break;
//		}
//		i++;
//	}
//	printf("%d", i);
//	return 0;
//}


//求最小公倍数_2
int low_com_mul(int x,int y)
{
	int i = x;
		while (1)
	{
		if (i % x == 0 && i % y == 0)
		{
			return i;
		}
		i++;
	}
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int ret = low_com_mul(a, b);
	printf("%d", ret);
	return 0;
}




