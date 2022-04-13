#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int pingfan(int n, int p)
{
	 if(p==0)
	{
		return 1;
	}
	else
	{
		return n * pingfan(n, p - 1);
	}
}
int weishu(int a,int p)
{
	int i = 0;
	int n = 0;
	int num = 0;
	for (i = 0; i <p; i++)
	{
		if (i >= 1) 
		{
			a = a / 10;
		}
		n = a % 10;
		num += pingfan(n, p);
	}
	return num;

	
}
int  main()
{
	int a = 0;
	int p = 0;
	int b = 0;
	for (a = 1; a < 1000000; a++)
	{
		int c = a;
		while (c)
		{
			c = c / 10;
			p++;
		}
		int b = weishu(a, p);
		p = 0;
		if (b == a)
		{
			printf("%d ", b);
		}
	}
}
//void init(int arr[10][10], int sz)
//{
//	int i = 0;
//	
//	for ( i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < sz; j++)
//		{
//			arr[i][j] = 0;
//		}
//	}
//}
//void Print(int arr[10][10], int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//	}
//}
//int main()
//{
//	int arr[10][10] = {0};
//	int sz = sizeof(arr) / sizeof(arr[0][0]);
//	init(arr, sz);
//	Print(arr, sz);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((a >> i) & 1 == 1)
//			b++;
//	}
//	printf("ÓÐ%d¸ö1", b);
//}