//atoi实现
//#include<stdio.h>
//#include<ctype.h>
//enum State
//{
//	VALID,
//	INVALID
//}state=VALID;
//int my_atoi(const char* str)
//{
//	int flag = 0;
//	state = INVALID;
//	if (str ==NULL)
//		return 0;
//	//空白字符处理
//	while (isspace(*str))
//	{
//		str++;
//	}
//	if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//	else if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	
//	long long ret = 0;
//	while (*str)
//	{
//		if (isdigit(*str) == 0)
//		{
//			break;
//		}
//		else
//		{
//			ret = ret * 10 +flag*( *str - '0');
//			str++;
//		}
//	}
//	return ret;
////}
//
//int main()
//{
//	char *p = '123';
//	long long ret = my_atoi(p);
//	printf("%lld", ret);
//	return 0;
//}





