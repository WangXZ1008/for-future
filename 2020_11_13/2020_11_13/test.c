#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

//��������
//
//������A�е����ݺ�����B�е����ݽ��н�����������һ����

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
	int size = sizeof(arr1) / sizeof(arr1[0]);//����һ����
	print(arr1, arr2, size);
	printf("\n\n");
	temp(arr1, arr2, size);
	print(arr1, arr2, size);
	system("pause");
	return 0;
}

//�������

//����һ���������飬��ɶ�����Ĳ���

//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��

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