#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#pragma warming(disable 4996)
int main()
{
	int x=0;
	int y=0;
	printf("��������������");
	scanf("%d %d", &x, &y);
	if (x < y){
		printf("�ϴ�ֵΪ%d\n", y);
	}
	else if (x>y){
		printf("�ϴ�ֵΪ%d\n", x);
	}
	else{
		printf("��ֵ���");
	}
	system("pause");
	return 0;
}