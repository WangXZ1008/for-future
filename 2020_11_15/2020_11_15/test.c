#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>


//计算求和

//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222


int main(){
	int a = 0;
	int temp = 0;
	int sum = 0;
	printf("请输入一个数字\n");
	scanf("%d", &a);
	for (int i = 0; i < 5; i++){
		temp = temp * 10 + a;
		printf("%d+", temp);
		sum = sum + temp;
	}
	printf("\n");
	printf("%d\n", sum);
	system("pause");
	return 0;
}





//字符串逆序

//写一个函数，可以逆序一个字符串的内容。

//void reverse(char* arr){
//	char* start = arr;
//	char* end = arr + strlen(arr) - 1;//不懂
//	while (start < end){
//		char temp = *start;
//		*start = *end;
//		*end = temp;
//		start++;
//		end--;
//	}
//}
//
//int main(){
//	char arr[] = "ABCDEF";
//	printf("%s\n", arr);
//	reverse(arr);
//	printf("%s", arr);
//	system("pause");
//	return 0;
//}





//使用指针打印数组内容


//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。

//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++){
//		printf("%d ", *(p + i));
//	}
//
//	system("pause");
//	return 0;
//}