////����n�Ľ׳�
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


//����1!+2!+3!+4!+...+10!
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


//��һ�����������в��Ҿ����ĳ������n,��дint binsearch(int x,int v[],int n);���ܣ���v[0]<=v[1]<=v[2]<=...<=v[n-1]�������в���x
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
//	printf("������Ҫ���ҵ����֣�>");
//	scanf("%d", &x);
//	ret = binsearch(x, v, n);
//	if (ret == -1)
//		printf("�Ҳ���");
//	else
//		printf("�ҵ��ˣ��±���%d", ret);
//	return 0;
//}


//��д���룬��ʾ����ַ��������ƶ������м���
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


//��д����ʵ�֣�ģ���û���¼����������ֻ�ܵ�¼����
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


//��������Ϸʵ��
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
//		printf("������µ����֣�>");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("�´���\n");
//		}
//		else if (input < random_num)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("ѡ���������������!");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//goto���Ӧ�ã�һ���ػ�����
#include<stdio.h>
int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("���Խ���һ�����ڹرգ�������룺��������ȡ���ػ���\n�����룺>");
	scanf("%s", input);
	if (0 == strcmp(input, "������"))
	{
		system��"shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}