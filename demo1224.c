//1.递归和非递归分别实现求第n个斐波那契数。
//
//2.编写一个函数实现n^k，使用递归实现
//
//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//
//4. 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//
//5.递归和非递归分别实现strlen
//6.递归和非递归分别实现求n的阶乘
//7.递归方式实现打印一个整数的每一位
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
int  Fbnq(int num)//递归和非递归分别实现求第n个斐波那契数。
{
	//递归方法
	//if (num == 1||num == 2)
	//{
	//	return 1;
	//}
	//return Fbnq(num - 1) + Fbnq(num - 2);
	//非递归方法
	int num1 = 1;
	int num2 = 1;
	int tep = 0;
	if (num <= 2)
	{
		return 1;
	}
	else
	{
		for (int i = 2; i < num; i++)
		{
			tep = num1 + num2;
			num1 = num2;
			num2 = tep;
		}
		return tep;
	}

}
int Power(int x,int y)//编写一个函数实现n^k，使用递归实现
{
	if (x > 0 && y == 0)
	{
		return 1;
	}
	if (x == 0 && y > 0)
	{
		return 0;
	}
	if (x > 0 && y > 0)
	{
		return x*Power(x, y - 1);
	}
}
int DigitSum(int x)//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
{           
	if (x < 10)
	{
		return x;
	}
	return DigitSum(x / 10) + DigitSum(x % 10);
}
void reverse_string(char* string)//编写一个函数 reverse_string(char * string)（递归实现）
{                               //将参数字符串中的字符反向排列.不能使用C函数库中的字符串操作函数。
	if (*string != '\0')
	{
		 reverse_string(string + 1);
	}
	printf("%c",*string );

}
int Strlen(char* string)//递归和非递归分别实现strlen
{
	//递归方法
	/*if (*string == '\0')
	{
		return 0;
	}
	return 1 + Strlen(string + 1);*/
	//非递归方法
	int a = 0;
	while(*string !='\0')
	{
		*string++;
		a++;
	}
	return a;
}
int Fctorial(int x)//递归和非递归分别实现求n的阶乘
{
	//递归方法
	//if (x == 0 || x == 1)
	//{
	//	return x;
	//}
	//return x*Fctorial(x - 1);
	//非递归方法
	int a = 1;
	for (int i = 1; i <= x; i++)
	{
		a = a*i;
	}
	return a;
}
void Printf_num(int x)//递归方式实现打印一个整数的每一位
{
	if (x > 9)
	{
		Printf_num(x/10) ;
	}
	printf("%d ", x % 10);
}
int main()
{
	int n = 0;
	//int k = 0;
	printf("请输入一个数-> ");
	scanf("%d", &n);
	/*printf("请输入次幂-> ");
	scanf("%d", &k);*/
	//printf("%d \n",Fbnq(n));
	//printf("%d \n",Power(n,k));
//	printf("%d ",DigitSum(n));
	//char a[] = "abcd";
	//reverse_string(a);
	//printf("%d ",Strlen(a));
	//printf("%d ",Fctorial(n));
	Printf_num(n);
	system("pause");
	return 0;
}