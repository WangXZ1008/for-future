#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

int main(){
	//дһ�����룬��ӡ100~200֮�������
	/*int j;
	for ( int i = 100; i <= 200; i++){
		for (  j = 2; j < i ; j++){
			if (i%j == 0)
				break;
			}
		if (j == i){
			printf("%d\n", i);
		}
		
	}*/


	//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
	//int i = 0;
	//int sum = 0;//����sum������9
	//for (i = 1; i < 100; i++){
	//	//i����10��9Ϊ��λ��9
	//	if (i % 10 == 9){
	//		sum++;
	//	}
	//	//i����10��9Ϊʮλ��9
	//	if (i / 10 == 9){
	//		sum++;
	//	}
	//}
	//printf("%d\n", sum);


	//�������
	//����1/1-1/2+1/3����+1/99-1/100��ֵ����ӡ�����
	//int i ;
	//double sum1 = 0.0;
	//double sum2 = 0.0;
	//double sum = 0.0;
	//for (i = 1; i <= 100; i++){
	//	if (i % 2 == 0){
	//	    sum2 -= 1.0 / i;			
	//	}
	//	if (i % 2 == 1){
	//		sum1 += 1.0 / i;
	//	}		
	//}
	//sum = sum1 + sum2;
	//printf("%lf\n", sum);


	//���ֲ���
	//��д������һ������ ���� �����в��Ҿ����ĳ����
	//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
	//����Ϊ������������
	//int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	//int toFind = 2;
	//int left = 0;
	//int right = sizeof(arr) / sizeof(arr[0]) - 1;
	//
	//while (left <= right){
	//	int mid = (left + right) / 2;
	//	if (toFind < arr[mid]){
	//		//��̭mid�����Ҳ࣬�޸�right��ֵ
	//		right = mid - 1;
	//	}
	//    else if (toFind > arr[mid]){
	//		//��̭mid������࣬�޸�left��ֵ
	//		left = mid + 1;
	//	}
	//    else {
	//		printf("�ҵ�Ԫ���±�Ϊ��%d\n", mid);
	//		break;
	//	}
	//	if(left > right){
	//		printf("�Ҳ���\n");
	//	}
	//}


	//�����ֵ
	//��10�������е����ֵ
	//int i = 0;
	//int MAX = 0;
	//int arr[11] = { 0 };
	//printf("����������ʮ������\n");
	//for (i = 1; i <= 10; i++){
	//	scanf("%d", &arr[i]);//�������10�����ָպ����������10��Ԫ��
	//}
	//MAX = arr[1];//�ȼ����һ��Ԫ�ؼ���һ������Ϊ���ֵ��Ȼ����������ֽ��бȽ�
	//for (i = 2; i <= 10; i++){
	//	if (arr[i] > MAX);
	//	MAX = arr[i];//���ϴ�ֵ����MAX��������ü�Ϊ���ֵ
	//}
	//printf("���ֵΪ%d\n", MAX);


	//����Ļ�����9*9�˷��ھ���
	//int i, j;
	//for (i = 1; i <= 9; i++){
	//	for (j = 1; j <= i; j++){
	//		
	//		printf("%d*%d=%-3d\n", i,j,i*j);
	//		printf("\n");
	//	}
	//}	
	//�𰸣�
	//int i = 0;
	////��������
	//for (i = 1; i <= 9; i++)
	//{
	//	//��ӡÿһ�����ݣ�ÿ����i�����ʽ
	//	int j = 0;
	//	for (j = 1; j <= i; j++)
	//	{
	//		printf("%d*%d=%2d ", i, j, i*j);
	//	}
	//	printf("\n");
	//}


    //��������Ϸ
    //��д�˵�
//int menu() {
//		printf("====================\n");
//		printf("======1.��ʼ��Ϸ=====\n");
//		printf("======0.�˳���Ϸ=====\n");
//		printf("====================\n");
//		printf("����������ѡ��\n");
//		int choice = 0;
//		scanf("%d", &choice);
//		return choice;
//}
//	//��д��Ϸ
//void game(){
//		//��������һ��1~100֮�����������
//		int toGuess = rand() % 100 + 1;
//		while (1){
//			//�ӿ���̨��ȡ��ҵ�����
//			printf("������Ҫ�µ����֣�\n");
//			int input = 0;
//			scanf("%d", &input);
//			//�ж�����Ƿ���У���������ʾ
//			if (input < toGuess){
//				printf("��С��\n");
//			}
//			else if (input>toGuess){
//				printf("�´���\n");
//			}
//			else{
//				printf("�¶���\n");
//				break;
//			}
//		}
//	}
//int main() {
//			//ʹ�õ�ǰʱ����Ϊ�������
//			srand(time(0));
//			while (1){
//				//дһ����ӡ�Ĳ˵������û����н���
//				int choice = menu();
//				if (choice == 1){
//					game();
//				}
//				else if (choice == 0){
//					printf("�˳������ټ���\n");
//					break;
//				}
//				else{
//					printf("���������������������룡\n");
//				}
//			}

	//printf("%3d\n", 10);
	//printf("%6d\n", 10);
	//printf("%9d\n", 10);
	//printf("%-3d\n", 10);
    system("pause");
	return 0;
}