#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>

//strlen的模拟（递归实现）

//递归和非递归分别实现strlen
//递归版本：
//递归版本求字符串长度（没有临时变量）
//思路就是把问题进行拆分
//例如 如果字符串是"abcd"
//求 strLen("abcd") => strLen("a")+strLen("bcd");
//即 strLen("abcd") =>  1 +strLen("bcd");
// strLen("bcd") => 1 + strLen("cd"); ......
//即 1 + strLen(str + 1)

//int StrLen(char str[]){	
//	if (str[0] == '\0'){
//		//这是一个空字符串 ""
//		return 0;
//	}
//	return 1 + StrLen(str + 1);
//}
//
//int main(){
//	char str[] = "hehe";
//	int ret = StrLen(str);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//非递归版本
//int StrLen(char str[]){
	//求字符串的思路就是从前往后遍历字符数组
	//每次读到一个字符 就count++，遇到'\0'就停下来，结束循环
//	int count = 0;
//	for (int i = 0; str[i] != '\0'; i++){
//		count++;
//	}
//	return count;
//}
//
//int main(){
//	char str[] = "hehe";
//	int ret = StrLen(str);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}


//计算斐波那契数

//递归和非递归分别实现求第n个斐波那契数(1,1,2,3,5,8,13......)

//例如：
//输入：5  输出：5
//输入：10， 输出：55
//输入：2， 输出：1

//递归版本
//int fib(int n){
//	if (n == 1 || n == 2){
//		return 1;
//	}
//		return fib(n - 1) + fib(n - 2);
//}

//非递归版本
//int fib(int n){
//	if (n == 1 || n == 2){
//		return 1;
//	}
//	//定义last1和last2分别表示 n-1,n-2
//	int last1 = 1;
//	int last2 = 1;
//	//此处cur表示第i项的值，cur=last1+last2, i=i-1 + i-2;
//	int cur = 0;
//	for (int i = 3; i <= n; i++){
//		cur = last1 + last2;
//		//计算出第i项的值，然后给last重新赋值
//		//此时第i-1项应为cur的值，第i-2项应为i-1的值
//		last2 = last1;
//		last1 = cur;
//	}
	//当i为第n项时，算出的cur就是最终结果
//	return cur;
//}
//
//int main(){
//	int result = fib(10);
//	printf("%d\n", result);
//	system("pause");
//	return 0;
//}


//计算一个数的每位之和（递归实现）

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19

//int digitsum(int n){
//	if (n < 10){
//		return n;
//	}
//	return n%10 + digitsum(n/10);
//}
//
//int main(){
//	int n = 0;
//	int sum = 0;
//	printf("请输入一个正整数n: \n");
//	scanf("%d", &n);
//	sum = digitsum(n);
//	printf("结果为：%d\n", sum);
//
//	/*int sum;
//	printf("请输入一个非负整数\n");
//	scanf("%d", &sum);
//	digitsum(sum);
//	printf("%d\n", digitsum);*/
//	system("pause");
//	return 0;
//}


//递归实现n的k次方

//编写一个函数实现n的k次方，使用递归实现。
//double Power(int n, int k){
//	//n*n*n*n*...... => n^k => n*n^(k-1)
//	if (k < 0){
//		k = -k;
//		return 1 / (n*Power(n, k - 1));
//	}
//	if (k == 0){
//		return 1;//n^0=1
//	}
//	if (k > 0){
//		return n*Power(n, k - 1);
//	}
//}
//
//int main(){
//	printf("请输入你要求的底数和指数：\n");
//	int n;
//	int k;
//	scanf("%d %d", &n, &k);
//	int ret = Power(n, k);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}


//字符串逆序（递归实现）

//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符 反向 排列。
//要求：不能使用C函数库中的字符串操作函数。

//非递归版本
//char *reverse_string(char *str){
//	char *start = str;
//	char *end = str + strlen(str) - 1;
//	for (; start < end; start++, end--){
//		char ch = *start; 
//		*start = *end;
//		*end = ch;
//	}
//	return str;
//}
//
//int main(){
//	char tmp[] = "hello bit!";
//	printf("%s\n", reverse_string(tmp));
//	system("pause");
//	return 0;
//}

//递归版本：
//char *reverse_string(char *str){
//	if (strlen(str) < 2){//递归的截止位置就是无数据需要交换
//		return str;
//	}
//	char ch = *str;
//	int len = strlen(str) - 1;
//	*str = *(str + len);//把最后一个位置的数据f赋值给起始位置
//	*(str + len) = '\0';//把当前最后一个字符数据替换为'\0'
//	reverse_string(str + 1);
//	*(str + len) = ch;
//	return str;
//}
//
//int main(){
//	char tmp[] = "hello bit!";
//	printf("%s\n", reverse_string(tmp));
//	system("pause");
//	return 0;
//}

