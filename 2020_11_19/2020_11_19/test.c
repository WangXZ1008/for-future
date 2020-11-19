#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <assert.h>

//模拟实现memmove

//首先memmove是一个 内存操作函数，不是 字符串操作函数，他可以处理多种类型的数据
//它的原型是 void*memmove(void* dest,const void* src,size_t count);
//
//这里有两个需要记住：1.它的返回值是void*,参数类型也是void*，这样它才可以处理不同类型的数据
//                   2.目标dest不能加const，源src加const。原因是我们需要从源src中拷贝数据到dest中，需要对dest
//					   进行赋值。若用const保护dest，便不能完成此操作。

//					memmove的好处是可以处理dest与src发生内存重叠d的情况。

//void *my_memmove(void *dest, const void *src, int n)
//{
//	/*因为char类型为1字节，所以将数据转化为char*
//	进行操作。并不是因为操作的对象是字符串*/
//	char* pdest = (char *)dest;
//	const char* psrc = (const char *)src;
//	assert(dest);
//	assert(src);
//	if (pdest <= psrc&&pdest >= psrc + n)//正常情况下从前向后拷贝
//	{
//		while (n--)
//		{
//			*pdest = *psrc;
//		}
//	}
//	else //当出现内存覆盖时从后向前拷贝
//	{
//		while (n--)
//		{
//			*(pdest + n) = *(psrc + n);
//		}
//	}
//	return dest;
//}
//
//int main()
//{
//	char arr[10] = "abcdefg";
//	char arr0[10] = "abcdefg";
//	char arr1[10] = { 0 };
//	my_memmove(arr + 2, arr, 4);
//	my_memmove(arr1, arr0, 4);
//	printf("内存覆盖情况：%s\n", arr + 2);
//	printf("正常情况：%s\n", arr1);
//	system("pause");
//	return 0;
//}


//模拟实现memcpy

//memcpy指的是c和c++使用的内存拷贝函数。
//memcpy函数的功能是从源src所指的内存地址的起始位置开始拷贝 n个字节 到目标dest所指的内存地址的起始位置中。
//memcpy的原型是：
//               void* memcpy（void* dest,const void* src,size_t n)

//注意: n代表的是字节数


void* my_memcpy(void* dest, const void* src, int n)
//因为memcpy是内存拷贝函数，所以必须什么类型都能接收，所以此处用void*做参数类型和返回值类型
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	//因为dest在循环体中不断发生变化，所以将dest的地址存放在指针变量ret中，
	//此后ret就随着dest进行变化，但dest不会随着ret进行变化，最后函数返回ret的值
	while (n--)
	{
		*(char*)dest = *(const char*)src;
		//void类型不能进行解引用操作，所以要进行强制类型转化，
		//因为此处n指的是字节数，需要一个字节一个字节拷贝，所以强制类型转化为char*。
		++(char*)dest;
		//void*类型不能进行++操作，所以要进行强制类型转化，
		//如果是后置++，那么强制类型转化先对dest进行，所以要进行前置++
		++(char*)src;
	}
	return ret;
}

//arr1打印输出函数
void print(int arr1[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
}

int main()
{
	char* str1[10] = { 0 };
	char* str2 = "abcdefg";
	char* ret = NULL;
	ret = my_memcpy(str1, str2, 5);//n代表的是字节数
	printf("%s\n", ret);

	int arr1[10] = { 0 };
	int arr2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	my_memcpy(arr1, arr2, 40);//此处n是字节数，40个字节也就是10个int型值
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	print(arr1, sz);
	system("pause");
	return 0;
}