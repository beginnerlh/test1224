//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
//
//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
//
//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//
//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//
//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
int  Fbnq(int num)//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
{
	//�ݹ鷽��
	//if (num == 1||num == 2)
	//{
	//	return 1;
	//}
	//return Fbnq(num - 1) + Fbnq(num - 2);
	//�ǵݹ鷽��
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
int Power(int x,int y)//��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
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
int DigitSum(int x)//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
{           
	if (x < 10)
	{
		return x;
	}
	return DigitSum(x / 10) + DigitSum(x % 10);
}
void reverse_string(char* string)//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
{                               //�������ַ����е��ַ���������.����ʹ��C�������е��ַ�������������
	if (*string != '\0')
	{
		 reverse_string(string + 1);
	}
	printf("%c",*string );

}
int Strlen(char* string)//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
{
	//�ݹ鷽��
	/*if (*string == '\0')
	{
		return 0;
	}
	return 1 + Strlen(string + 1);*/
	//�ǵݹ鷽��
	int a = 0;
	while(*string !='\0')
	{
		*string++;
		a++;
	}
	return a;
}
int Fctorial(int x)//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
{
	//�ݹ鷽��
	//if (x == 0 || x == 1)
	//{
	//	return x;
	//}
	//return x*Fctorial(x - 1);
	//�ǵݹ鷽��
	int a = 1;
	for (int i = 1; i <= x; i++)
	{
		a = a*i;
	}
	return a;
}
void Printf_num(int x)//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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
	printf("������һ����-> ");
	scanf("%d", &n);
	/*printf("���������-> ");
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