#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

//ð������

//ʵ��һ�������������ð������
//����
void bubble(int arr[], int size){
	int i = 0;
	for (i = 0; i < size - 1; i++){	//sizeΪ����Ԫ�ظ�����size-1Ϊ���һ��Ԫ�ص��±�
		int j = 0;
		for (j = 0; j < size - 1 - i; j++){
			if (arr[j] < arr[j + 1]){ //������ǰ���С������ //��Ҫ���򣬸ı� < ����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	int size = sizeof(arr) / sizeof(arr[0]);
	bubble(arr, size);
	int i = 0;
	for (i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}




�ο���(�����ɲ鿴)
/*
˼·��
�������飬�����������ڵ�����Ԫ�ؽ��бȽϣ������Ҫ����ǰһ�����ݴ��ں�һ������ʱ����������λ���ϵ����ݣ�
ֱ�����е����ݱȽ��꣬��ʱ�����������Ѿ����������ĩβ��
����������Ѿ��ź����⣬�������ݻ������裬��ʣ�����ݲ������������Ƶķ�ʽ���д�����
*/


/* BubbleSort(int array[], int size)
{
	// ���ѭ������ð�����������
	// size-1��ʾ�����һ��������ֻʣ��1��Ԫ�أ�����ð�ݿ���ʡ��
	for (int i = 0; i < size - 1; ++i)
	{
		// ����ð�ݵķ�ʽ�������ڵ�����Ԫ�ؽ��бȽϣ�ǰһ�����ں�һ��Ԫ��ʱ���������������ݣ�����ֱ�������ĩβ
		for (int j = 1; j < size - i; ++j)
		{
			if (array[j - 1] > array[j])
			{
				int temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
			}
		}
	}
}




�Ż������ĳ��ð�ݽ����������Ѿ������ˣ�����ʣ��Ԫ�ص�ð�ݿ���ʡ��



void BubbleSort(int array[], int size)
{
	// ���ѭ������ð�����������
	// size-1��ʾ�����һ��������ֻʣ��1��Ԫ�أ�����ð�ݿ���ʡ��
	for (int i = 0; i < size - 1; ++i)
	{
		int isChange = 0;
		// ����ð�ݵķ�ʽ�������ڵ�����Ԫ�ؽ��бȽϣ�ǰһ�����ں�һ��Ԫ��ʱ���������������ݣ�����ֱ�������ĩβ
		for (int j = 1; j < size - i; ++j)
		{
			if (array[j - 1] > array[j])
			{
				int temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;

				isChange = 1;   // �������ð�ݽ������ݽ����ˣ�˵�����λ�������ģ��ͽ�isChange����Ϊ1
			}
		}

		// �������ð���У�Ԫ��û�н������򱾴ο�ʼð��ʱ�������Ѿ������ˣ������ð�ݿ��Բ��ý�����
		if (!isChange)
			return;
	}
}*/