#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

//����������������������ʱ������

//����������ʱ������������������������

void temp(int m,int n){
	m ^= n;
	n ^= m;
	m ^= n;
	printf("%d %d",m,n);
}

int main(){
	int m = 1;
	int n = 2;
	temp(m, n);
	system("pause");
	return 0;
}



//3333333333333333333333333333333333333333
//ͳ�ƶ�������1�ĸ���
//
//дһ���������ز����������� 1 �ĸ�����
//���磺 15    0000 1111    4 �� 1

//int one_count(int num){
//	int count = 0;
//	while (num){
//		if ((num & 1) != 0){
//			count++;
//		}
//		num = num >> 1;
//	}
//	return count;
//}
//
//int main(){
//	int num = 0;
//	printf("������һ����\n");
//	scanf("%d", &num);
//	printf("%d\n", (one_count(num)));
//	system("pause");
//	return 0;
//}



//111111111111111111111111111111111111111111111111111111111111111111
//��ӡ���������Ƶ�����λ��ż��λ

//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������

/*
˼·��
1. ��ȡ���е�����λ�������λ��1�����1����0�����0
2. ��ͬ���ķ�ʽ��ȡż��λ��


���num��ĳһλ��0����1�ķ�ʽ��
1. ��num�����ƶ�iλ
2. ������λ֮��Ľ����1��λ�룬�����
�����0�����i������λ��0
����Ƿ�0�����i������λ��1
*/
//void print(int num){
//	for (int i = 31; i >= 1; i -= 2){
//		int ret1 = (num >> i) & 1;
//		printf("%d ", ret1);//ż
//	}
//	printf("\n");
//	for (int i = 30; i >= 2; i -= 2){
//		int ret2 = (num >> i) & 1;
//		printf("%d ", ret2);//��
//	}
//}
//
//int main(){
//	int num = 0;
//	printf("������һ����\n");
//	scanf("%d", &num);
//	print(num);
//	system("pause");
//	return 0;
//}

//22222222222222222222222222222222222222222222222222222222222222222��û����
//���������������в�ͬλ�ĸ���

//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7

/*
˼·��
1. �Ƚ�m��n���а�λ��򣬴�ʱm��n��ͬ�Ķ����Ʊ���λ���㣬��ͬ�Ķ����Ʊ���λΪ1
2. ͳ�������ɺ����Ķ����Ʊ���λ���ж��ٸ�1����
*/
/*
int calc_diff_bit(int m, int n)
{
	int tmp = m^n;
	int count = 0;
	while (tmp)
	{
		tmp = tmp&(tmp - 1);//����
		count++;
	}
	return count;
}


int main()
{
	int m, n;
	while (scanf("%d %d", &m, &n) == 2)//����
	{
		printf("%d\n", calc_diff_bit(m, n));
	}
	return 0;
}*/