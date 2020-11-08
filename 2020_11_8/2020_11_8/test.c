////计算n的阶乘
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
////int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i < n; i++)
//	{
//		sum *= i;
//	}
//	printf("%d", sum);
//	return 0;
//}


//计算1!+2!+3!+4!+...+10!
//int main()
//{
//	int i = 0;
//	int x = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		x *= i;
//		sum += x;
//	}
//	printf("%d", sum);
//	return 0;
//}


//在一个有序数组中查找具体的某个数字n,编写int binsearch(int x,int v[],int n);功能：在v[0]<=v[1]<=v[2]<=...<=v[n-1]的数组中查找x
//int binsearch(int x, int v[], int n)
//{
//	int left = 0;
//	int right = n - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (x < v[mid])
//		{
//			right = mid - 1;
//		}
//		else if (x > v[mid])
//		{
//			return mid + 1;
//		}
//		else if (x == v[mid])
//		{
//			return mid;
//		}
//
//		else
//			return -1;
//	}
//}
//int main()
//{
//	int v[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int x = 0;
//	int ret = 0;
//	int n = sizeof(v) / sizeof(v[0]);
//	printf("请输入要查找的数字：>");
//	scanf("%d", &x);
//	ret = binsearch(x, v, n);
//	if (ret == -1)
//		printf("找不到");
//	else
//		printf("找到了，下标是%d", ret);
//	return 0;
//}


//编写代码，演示多个字符从两端移动，向中间汇聚
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "Hello World";
//	char arr2[]= "###########";
//	int  left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	while (left <= right)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//	return 0;
//}


//编写代码实现，模拟用户登录场景，并且只能登录三次
//int main()
//{
//	char psw[10] = "";
//	int i = 0;
//	char *ps = "123456";
//	for (i = 0; i <= 3; ++i)
//	{
//		printf("please input:>");
//		scanf("%s",&psw);
//		if (strcmp(psw,ps)== 0)
//			break;
//	}
//	if (i == 3)
//		printf("exit\n");
//	else
//		printf("log in\n");
//	return 0;
//}


//猜数字游戏实现
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("********************\n");
//	printf("***** 1.play  ******\n"); 
//	printf("***** 0.exit  ******\n");
//	printf("********************\n");
//}
//
//void game()
//{
//	int random_num = rand() % 100 + 1;
//	int input = 0;
//	while (1)
//	{
//		printf("请输入猜的数字：>");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("猜大了\n");
//		}
//		else if (input < random_num)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("选择错误，请重新输入!");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//goto语句应用：一个关机程序
#include<stdio.h>
int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("电脑将在一分钟内关闭，如果输入：我是猪，就取消关机！\n请输入：>");
	scanf("%s", input);
	if (0 == strcmp(input, "我是猪"))
	{
		system（"shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}