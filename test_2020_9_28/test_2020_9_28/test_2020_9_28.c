#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#pragma warming(disable 4996)
int main()
{
	int x=0;
	int y=0;
	printf("请输入两个数：");
	scanf("%d %d", &x, &y);
	if (x < y){
		printf("较大值为%d\n", y);
	}
	else if (x>y){
		printf("较大值为%d\n", x);
	}
	else{
		printf("两值相等");
	}
	system("pause");
	return 0;
}