#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>

//实现一个函数，判断一个数是不是素数。

//利用上面实现的函数打印100到200之间的素数。


//void IsPrime(int num){
//	if (num < 2){
//		//不是素数
//	}
//	int i;
//	for (i = 2; i < num ; i++){
//
//		if (num%i == 0){
//			break;
//			//不是素数	
//		}	
//	}
//		if (num == i){
//			printf("%d\n", num);
//			//是素数 打印
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


//实现函数判断year是不是润年。
//闰年：四年一闰，百年不闰，四百年再闰。
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
//	printf("请输入您要查找的年份：\n");
//	scanf("%d", &year);
//	LeapYear(year);
//
//	system("pause");
//	return 0;
//}

//实现一个函数来交换两个整数的内容。

//void Swap(int* x, int* y){
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main(){
//	int x;
//	int y;
//	printf("请输入两个数字：\n");
//	scanf("%d %d", &x, &y);
//	Swap(&x, &y);
//	printf("%d %d\n", x, y);
//	system("pause");
//	return 0;
//}

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定

//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。

//void Mul(int num){
//	int j;
//	for (int i = 1; i <= num; i++){
//		for ( j = 1; j <= i; j++){
//	    \t隔开相同的距离，更加美观
//			printf("%d*%d=%d\t", i, j, i*j);
//      两数相等时换行，更加美观
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
//	printf("请输入数字：\n");
//	scanf("%d", &i);
//	Mul(i);
//
//	system("pause");
//	return 0;
//}

//打印一个数的每一位

//递归方式实现打印一个整数的每一位
//int Num(int i){
//	if (i > 9){//初始条件，（整数小于9时为个位数，即要打印的最后一位数）
//		Num(i / 10);//递归，调用自己（条件需使其越来越接近初始条件，每次/10更加接近个位数）
//	}
//	printf("%d ", i % 10);	
//}
//int main(){
//	int i;
//	printf("请输入整数：");
//	scanf("%d", &i);
//	Num(i);
//
//	system("pause");
//	return 0;
//}




//求阶乘

//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）

//递归求阶乘

//int factor(int n){
//	//初始条件
//	if (n == 1){
//		return 1;
//	}
//	//递归
//	return n*factor(n - 1);//n-1使结果更加接近n=1
//	//注意return的使用
//}
//
//int main(){
//	int n;
//	printf("请输入n的值：\n");
//	scanf("%d", &n);
//	int ret = factor(n);
//	printf("%d", ret);
//
//	system("pause");
//	return 0;
//}

//非递归求阶乘
int factor(int n){
	int ret = 1;
	for (int i = 1; i <= n; i++){
		
		ret = ret*i;
	}
	printf("%d", ret);
}

int main(){
	int n;
	printf("请输入n的值：\n");
	scanf("%d", &n);
	factor(n);
	
	system("pause");
	return 0;
}