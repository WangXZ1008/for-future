#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

//交换两个变量（不创建临时变量）

//不允许创建临时变量，交换两个整数的内容

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
//统计二进制中1的个数
//
//写一个函数返回参数二进制中 1 的个数。
//比如： 15    0000 1111    4 个 1

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
//	printf("请输入一个数\n");
//	scanf("%d", &num);
//	printf("%d\n", (one_count(num)));
//	system("pause");
//	return 0;
//}



//111111111111111111111111111111111111111111111111111111111111111111
//打印整数二进制的奇数位和偶数位

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

/*
思路：
1. 提取所有的奇数位，如果该位是1，输出1，是0则输出0
2. 以同样的方式提取偶数位置


检测num中某一位是0还是1的方式：
1. 将num向右移动i位
2. 将移完位之后的结果与1按位与，如果：
结果是0，则第i个比特位是0
结果是非0，则第i个比特位是1
*/
//void print(int num){
//	for (int i = 31; i >= 1; i -= 2){
//		int ret1 = (num >> i) & 1;
//		printf("%d ", ret1);//偶
//	}
//	printf("\n");
//	for (int i = 30; i >= 2; i -= 2){
//		int ret2 = (num >> i) & 1;
//		printf("%d ", ret2);//奇
//	}
//}
//
//int main(){
//	int num = 0;
//	printf("请输入一个数\n");
//	scanf("%d", &num);
//	print(num);
//	system("pause");
//	return 0;
//}

//22222222222222222222222222222222222222222222222222222222222222222（没懂）
//求两个数二进制中不同位的个数

//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7

/*
思路：
1. 先将m和n进行按位异或，此时m和n相同的二进制比特位清零，不同的二进制比特位为1
2. 统计异或完成后结果的二进制比特位中有多少个1即可
*/
/*
int calc_diff_bit(int m, int n)
{
	int tmp = m^n;
	int count = 0;
	while (tmp)
	{
		tmp = tmp&(tmp - 1);//不懂
		count++;
	}
	return count;
}


int main()
{
	int m, n;
	while (scanf("%d %d", &m, &n) == 2)//不懂
	{
		printf("%d\n", calc_diff_bit(m, n));
	}
	return 0;
}*/