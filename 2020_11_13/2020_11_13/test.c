#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

//交换数组
//
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）

void temp(int arr1[],int arr2[],int size){
	for (int i = 0; i < size; i++){	
			int tmp = arr1[i];
			arr1[i] = arr2[i];
			arr2[i] = tmp;
	}
}

void print(int arr1[], int arr2[], int size){
	int i = 0;
	for (i = 0; i < size; i++){
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < size; i++){
		printf("%d ", arr2[i]);
	}
}

int main(){
	int arr1[] = { 9, 5, 2, 7 };
	int arr2[] = { 6, 6, 6, 6 };
	int size = sizeof(arr1) / sizeof(arr1[0]);//数组一样大
	print(arr1, arr2, size);
	printf("\n\n");
	temp(arr1, arr2, size);
	print(arr1, arr2, size);
	system("pause");
	return 0;
}

//数组操作

//创建一个整形数组，完成对数组的操作

//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。

//void init(int arr[],int size){
//	int i = 0;
//	for (i = 0; i < size; i++){
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[],int size){
//	int i = 0;
//	for (i = 0; i < size; i++){
//		printf("%d ", arr[i]);
//	}
//}
//
//void reverse(int arr[],int size){
//	int begin = 0;
//	int end = size - 1;
//	for (begin = 0; begin <= end / 2; begin++){
//		int tmp = arr[begin];
//		arr[begin] = arr[end];
//		arr[end] = tmp;
//		end--;
//	}
//}
//
//int main(){
//	int arr[] = { 9, 5, 2, 7 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr,size);
//	print(arr,size);
//	init(arr,size);
//	print(arr,size);
//
//	system("pause");
//	return 0;
//}