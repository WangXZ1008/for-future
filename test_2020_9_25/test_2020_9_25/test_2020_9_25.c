#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#pragma warming(disable 4996)//解决scanf报错
#include <Windows.h>//仅仅是为了让程序暂停一下，可以看到结果

//#define MAX 100
//#define RED 10//宏定义:见名知意,便于修改维护
//enum枚举常量
//enum{
//	A,
//	B,
//	C=11,
//	D
//};
int main()
{
	char str1[16] = "bit";
	char str2[16] = { 'b', 'i', 't' };//可能出现乱码
	char str3[16] = { 'b', 'i', 't', '\0' };
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	
	//char str[16] = "hello";
	//printf("%s\n", str);
	
	//c字符串“”默认以 ‘\0’ 字符结尾
	//printf("%d\n", sizeof("abcd"));//5
	//printf("%d\n", sizeof("x"));//2
	//printf("%d\n", sizeof(""));//1
	
	
	//int a = 100;//初始化
	//a = 200;//赋值
	//printf("%d\n", a);//a=200

	//const int a = 100;
	//a = 200;
	//print("%d\n", a);//被const修饰的常变量，不可被直接修改
	
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
	//printf("请输入两个数：");
	//scanf("%d %d", &num1,&num2);//&变量取地址
	//int result = num1 + num2;
	//printf("%d+%d=%d\n",num1,num2,result);
	//printf("%d,%d\n", num1, num2);
	
	
	//printf("%d\n", sizeof(char));//sizeof是用来进行类型大小计算的
	//printf("%d\n", sizeof(short));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(long));
	//printf("%d\n", sizeof(long long));
	//printf("%d\n", sizeof(float));
	//printf("%d\n", sizeof(double));
		//printf("hello!\n");

	system("pause");//仅仅是为了让程序暂停一下，可以看到结果
	
	return 0;
}