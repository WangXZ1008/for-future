#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <assert.h>

//1.使用指针打印数组内容

//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。

//2.字符串逆序
//	写一个函数，可以逆序一个字符串的内容。

//3.计算求和

//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222

//void reverse(char *str){
//	assert(str != NULL);//断言函数，如果str==NULL的话，就不会执行接下来的代码
//	int len = strlen(str);
//	int i = 0;
//	for (i = 0; i<len / 2; i++)
//	{
//		char s = str[i];
//		str[i] = str[len - 1 - i];//把后面的换给前面的
//		str[len - 1 - i] = s;//把前面的换给后面的
//	}
//	//str[len]='\0';//不需要，本身我们就没有改变str[len]的值，他原本就是'\0'
//}

int main(){
	//1.
	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//int* p = arr;
	//for (int i = 0; i < 10; i++){
	//	printf("%d ", *(p + i));
	//}

	/*char s[] = "abcdefg";
	reverse(s);
	printf("%s\n", s);*/

	system("pause");
	return 0;
}