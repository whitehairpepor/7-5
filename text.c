#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int check()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int ret = check();
//	if (ret == 1)
//	{
//		printf("Ð¡¶Î");
//	}
//	else
//	{
//		printf("da duan");
//	}
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d\n", a, b, c);
//	return 0;
//} 
//int main()
//{
//	char a = -128;
//	printf("%u\n",a);
//	return 0;
//}
#include<windows.h>
int main()
{
	unsigned int i;
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);
		Sleep(100);
	}
		return 0;
}