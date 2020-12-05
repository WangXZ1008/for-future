#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include "seqLIst.h"

//#define N 10
//动态顺序表定义：空间可变

//typedef struct seqList
//{
//	SLDataType* _data;//需要动态开辟的数组
//	size_t _size;//有效元素的个数
//	size_t _capicity;//容量空间的大小
//}seqList;

void initseqList(seqList* sl)//初始化结构体
{
	sl->_data = NULL;
	sl->_capicity = sl->_size = 0;
}

//尾插一个数据
void pushBack(seqList* sl, SLDataType val)
{
	//检查容量
	checkCapicity(sl);
	sl->_data[sl->_size] = val;
	++sl->_size;
}

void checkCapicity(seqList* sl)
{
	//assert(sl);//debug有效，realese不可用
	if (sl == NULL)
		return;
	//如果元素个数和元素容量相同，说明空间满了，需要调整空间（扩容）
	if(sl->_size == sl->_capicity)
	{		
		int newCapitipy = 0 ? 1 : 2 * sl->_capicity;
		//开一个更大的空间，拷贝已有数据，释放原有空间
		SLDataType* tmp = (SLDataType*)malloc(sizeof(SLDataType)* newCapitipy);
		memcpy(tmp, sl->_data, sizeof(SLDataType)* sl->_size);
		free(sl->_data);

		//另一种写法
		//sl->_data = (SLDataType*)realloc(sl->_data, sizeof(SLDataType)* newCapitipy);

		//更新
		sl->_data = tmp;
		sl->_capicity = newCapitipy;
	}
}

void test()
{
	seqList sl;
	initseqList(&sl);
	pushBack(&sl, 1);
	pushBack(&sl, 2);
	pushBack(&sl, 3);
	pushBack(&sl, 4);
	pushBack(&sl, 5);

}

int main()
{
	test();
	return 0;
}


//静态顺序表定义：空间不可变
//typedef struct seqList2
//{
//	SLDataType* _data[N];
//	size_t _size;//有效元素的个数
//	size_t _capicity;//容量空间的大小
//}seqList2;
//
//void test()
//{
//	printf("动态:%d\n", sizeof(seqList));//12,不包含数组大小
//	printf("静态:%d\n", sizeof(seqList2));//48，包含数组大小
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}