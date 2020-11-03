#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>

int main(){
	//使用 while 循环计算1+2+……+100
	int sum = 0;
	int num = 1;
	while (num < 101){
		sum = sum + num;
		num = num + 1;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}