#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>

//ʵ��һ���������ж�һ�����ǲ���������

//��������ʵ�ֵĺ�����ӡ100��200֮���������


//void IsPrime(int num){
//	if (num < 2){
//		//��������
//	}
//	int i;
//	for (i = 2; i < num ; i++){
//
//		if (num%i == 0){
//			break;
//			//��������	
//		}	
//	}
//		if (num == i){
//			printf("%d\n", num);
//			//������ ��ӡ
//		}	
//		
//}
//
//int main(){
//	int num=101;
//	while (num <= 200){
//		IsPrime(num);
//		num += 2;
//	}
//	system("pause");
//	return 0;
//}


//ʵ�ֺ����ж�year�ǲ������ꡣ
//���꣺����һ�򣬰��겻���İ�������
//void LeapYear(int year){
//	if (year % 100 == 0){
//		printf("no\n");
//	}
//	else if (year % 4 == 0 ){
//		printf("yes\n");
//	}
//	else{
//		printf("no\n");
//	}
//}
//
//int main(){
//	int year;
//	printf("��������Ҫ���ҵ���ݣ�\n");
//	scanf("%d", &year);
//	LeapYear(year);
//
//	system("pause");
//	return 0;
//}

//ʵ��һ�������������������������ݡ�

//void Swap(int* x, int* y){
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main(){
//	int x;
//	int y;
//	printf("�������������֣�\n");
//	scanf("%d %d", &x, &y);
//	Swap(&x, &y);
//	printf("%d %d\n", x, y);
//	system("pause");
//	return 0;
//}

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��

//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���

//void Mul(int num){
//	int j;
//	for (int i = 1; i <= num; i++){
//		for ( j = 1; j <= i; j++){
//	    \t������ͬ�ľ��룬��������
//			printf("%d*%d=%d\t", i, j, i*j);
//      �������ʱ���У���������
//			if (i == j){
//				printf("\n");
//			}
//		}
//	
//	}
//}
//
//int main(){
//	int i;
//	printf("���������֣�\n");
//	scanf("%d", &i);
//	Mul(i);
//
//	system("pause");
//	return 0;
//}

//��ӡһ������ÿһλ

//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//int Num(int i){
//	if (i > 9){//��ʼ������������С��9ʱΪ��λ������Ҫ��ӡ�����һλ����
//		Num(i / 10);//�ݹ飬�����Լ���������ʹ��Խ��Խ�ӽ���ʼ������ÿ��/10���ӽӽ���λ����
//	}
//	printf("%d ", i % 10);	
//}
//int main(){
//	int i;
//	printf("������������");
//	scanf("%d", &i);
//	Num(i);
//
//	system("pause");
//	return 0;
//}




//��׳�

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩

//�ݹ���׳�

//int factor(int n){
//	//��ʼ����
//	if (n == 1){
//		return 1;
//	}
//	//�ݹ�
//	return n*factor(n - 1);//n-1ʹ������ӽӽ�n=1
//	//ע��return��ʹ��
//}
//
//int main(){
//	int n;
//	printf("������n��ֵ��\n");
//	scanf("%d", &n);
//	int ret = factor(n);
//	printf("%d", ret);
//
//	system("pause");
//	return 0;
//}

//�ǵݹ���׳�
int factor(int n){
	int ret = 1;
	for (int i = 1; i <= n; i++){
		
		ret = ret*i;
	}
	printf("%d", ret);
}

int main(){
	int n;
	printf("������n��ֵ��\n");
	scanf("%d", &n);
	factor(n);
	
	system("pause");
	return 0;
}