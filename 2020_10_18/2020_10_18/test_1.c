#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <string.h>

int main(){
	//�� ��д���룬��ʾ����ַ��������ƶ������м���
	//char str1[] = "hello bit!";
	//char str2[] = "##########";
	//int left = 0;//��һ�±�Ϊ0
	//int right = strlen(str1) - 1;//�ַ�������-1Ϊ��һ�±�
	//    printf("%s\n", str2);
	//while (left <= right){
	//	Sleep(700);
	//	system("cls");//cls�����Ļ
	//	//��ӡ֮ǰ�����޸�str2������
	//	str2[left] = str1[left];
	//	str2[right] = str1[right];
	//	printf("%s\n", str2);
	//	left++;
	//	right--;
	//}

	//�� ��д����ʵ�֣�ģ���û���½����������ֻ�ܵ�½���Ρ�
	//��ֻ���������������룬���������ȷ����ʾ��½�ɹ���
	//������ξ�����������˳�����
	//for (int i = 0; i < 3; i++){
	//	char input[20] = { 0 };
	//	char password[20] = "888888";
	//	printf("���������룺\n");
	//	scanf("%s", input);
	//	if (strcmp(input, password) == 0){
	//		printf("��½�ɹ���\n");
	//		break;
	//	}
	//	else{
	//		printf("�������\n");
	//	}
	//}

	//����ͨ���������±����ָ��Ԫ�ص�λ��
	/*int arr[] = { 9, 5, 2, 7, 4, 2, 1, 6 };
	int toFind = 4;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0])-1; i++){
		if (arr[i] == toFind){
			printf("Ŀ�������±�Ϊ%d\n", i);
		}
	}*/

	//���������������±����ָ��Ԫ�ص�λ��
	//����Ϊ����
	//���۰���ҡ�  �����ֲ��ҡ�
	//int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	//int toFind = 2;
	////���ֲ��� ��д������[left,right]
	//int left = 0;
	//int right = sizeof(arr) / sizeof(arr[0]) - 1;
	////���䲻Ϊ�վͼ�������
	//while (left <= right){
	//	//��ʾ�м�ֵ�±�mid
	//	int mid = (left + right) / 2;
	//	if (toFind < arr[mid]){
	//	//��̭�м�ֵ�����Ҳ࣬�޸�right��ֵ
	//		right = mid - 1;
	//	}
	//	else if (toFind > arr[mid]){
	//		//��̭�м�ֵ������࣬�޸�left��ֵ
	//		left = mid + 1;
	//	}
	//	else {
	//		printf("�ҵ��ˣ�%d\n", mid);
	//		break;
	//	}
	//	if (left > right){
	//		printf("�������в����ڴ�Ԫ��\n");
	//	}
	//}



	system("pause");
	return 0;
}