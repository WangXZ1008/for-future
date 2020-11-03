#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int i;//没有给初始值，系统会默认将其初始化为0；
int main()
{
	//i--;
	//if (i > sizeof(i))
	//{
	//	printf(">\n");
	//}
	//else
	//{
	//	printf("<\n");
	//}
	printf("%d\n",i);
	system("pause");
	return 0;
}