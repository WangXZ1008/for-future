#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <Windows.h>

//创建了一个函数
//创建出来的函数不能直接运行，
//需要其他代码来调用
//封装--
//int factor(int n){
//	int result = 1;
//	for (int i = 1; i <= n; i++){
//		result = result * i;
//	}
//	return result;
//}

int main(){
	//① 写一个代码求n的阶乘
	//int n = 5;
	//int result = 1;//保存阶乘的结果
	//for (int i = 1; i <= n; i++){
	//	result = result * i;
	//}
	//printf("result=%d\n", result);

	//②
	//计算 1！+2！+3！+…+10！
	//创建一个函数
	/*int n = 10;
	int sum = 0;
	for (int i = 1; i <= n; i++){
		sum = sum + factor(i);
	}
	printf("%d\n", sum);*/
	system("pause");
	return 0;
}
