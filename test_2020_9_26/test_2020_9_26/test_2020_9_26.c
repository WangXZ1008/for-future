#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#pragma warming(disable 4996)

int main()
{

	

	int num1=0;
	int num2=0;
	printf("请输入两个数：");
	int result = num1 + num2;
	scanf("%d %d", &num1, &num2);
	printf("%d+%d=%d\n", num1, num2, result);

	
	system("pause");
	return 0;
}