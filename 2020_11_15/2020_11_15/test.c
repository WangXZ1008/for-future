#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>


//�������

//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222


int main(){
	int a = 0;
	int temp = 0;
	int sum = 0;
	printf("������һ������\n");
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





//�ַ�������

//дһ����������������һ���ַ��������ݡ�

//void reverse(char* arr){
//	char* start = arr;
//	char* end = arr + strlen(arr) - 1;//����
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





//ʹ��ָ���ӡ��������


//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣

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