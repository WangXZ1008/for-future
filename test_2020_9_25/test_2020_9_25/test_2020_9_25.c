#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#pragma warming(disable 4996)//���scanf����
#include <Windows.h>//������Ϊ���ó�����ͣһ�£����Կ������

//#define MAX 100
//#define RED 10//�궨��:����֪��,�����޸�ά��
//enumö�ٳ���
//enum{
//	A,
//	B,
//	C=11,
//	D
//};
int main()
{
	char str1[16] = "bit";
	char str2[16] = { 'b', 'i', 't' };//���ܳ�������
	char str3[16] = { 'b', 'i', 't', '\0' };
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	
	//char str[16] = "hello";
	//printf("%s\n", str);
	
	//c�ַ�������Ĭ���� ��\0�� �ַ���β
	//printf("%d\n", sizeof("abcd"));//5
	//printf("%d\n", sizeof("x"));//2
	//printf("%d\n", sizeof(""));//1
	
	
	//int a = 100;//��ʼ��
	//a = 200;//��ֵ
	//printf("%d\n", a);//a=200

	//const int a = 100;
	//a = 200;
	//print("%d\n", a);//��const���εĳ����������ɱ�ֱ���޸�
	
	/*int a = A;
	int b = B;
	int c = C;
	int d = D;
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%d\n", d);*/
	
	/*int a = RED;
	printf("%d\n", a);*/
	/*int a = MAX;
	printf("%d\n", a);
	printf("%d\n", MAX);*/
	//int num1;
	//int num2;
	//printf("��������������");
	//scanf("%d %d", &num1,&num2);//&����ȡ��ַ
	//int result = num1 + num2;
	//printf("%d+%d=%d\n",num1,num2,result);
	//printf("%d,%d\n", num1, num2);
	
	
	//printf("%d\n", sizeof(char));//sizeof�������������ʹ�С�����
	//printf("%d\n", sizeof(short));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(long));
	//printf("%d\n", sizeof(long long));
	//printf("%d\n", sizeof(float));
	//printf("%d\n", sizeof(double));
		//printf("hello!\n");

	system("pause");//������Ϊ���ó�����ͣһ�£����Կ������
	
	return 0;
}