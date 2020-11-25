#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

//模拟实现atoi

//	atoi() 函数用来将字符串转换成整数(int)
//	其原型为:	int atoi(const char* str);

//【函数说明】atoi() 函数会扫描参数 str 字符串，
//	跳过前面的空白字符（例如空格，tab缩进等，可以通过 isspace() 函数来检测）,
//	直到遇上数字或正负符号才开始做转换，而再遇到非数字或字符串结束时(‘\0’)才结束转换，并将结果返回。
//【返回值】返回转换后的整型数；(如果 str 不能转换成 int 或者 str 为空字符串，那么将返回 0。)

int my_atoi(const char* str){
	assert(str != NULL);
	while (*str == ' '){
		str++;
	}
	int flag = 1;//符号位
	if (*str == '-'){
		flag = -1;
		str++;
	}
	else if (*str == '+'){
		str++;
	}
	long long ret = 0;
	while (*str != '\0'){
		if (*str<'0' || *str>'9')
			break;
		ret = ret * 10 + (*str - '0');
		if (ret > INT_MAX || -ret < INT_MAX)
			return 0;
		str++;
	}
	return flag*ret;
}

int main(){
	char* str = "  -9527";
	int ret1 = atoi(str);
	printf("%d\n", ret1);
	int ret2 = my_atoi(str);
	printf("%d\n", ret2);
	system("pause");
	return 0;
}