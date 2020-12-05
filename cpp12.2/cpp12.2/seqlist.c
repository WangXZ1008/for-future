#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include "seqLIst.h"

//#define N 10
//��̬˳����壺�ռ�ɱ�

//typedef struct seqList
//{
//	SLDataType* _data;//��Ҫ��̬���ٵ�����
//	size_t _size;//��ЧԪ�صĸ���
//	size_t _capicity;//�����ռ�Ĵ�С
//}seqList;

void initseqList(seqList* sl)//��ʼ���ṹ��
{
	sl->_data = NULL;
	sl->_capicity = sl->_size = 0;
}

//β��һ������
void pushBack(seqList* sl, SLDataType val)
{
	//�������
	checkCapicity(sl);
	sl->_data[sl->_size] = val;
	++sl->_size;
}

void checkCapicity(seqList* sl)
{
	//assert(sl);//debug��Ч��realese������
	if (sl == NULL)
		return;
	//���Ԫ�ظ�����Ԫ��������ͬ��˵���ռ����ˣ���Ҫ�����ռ䣨���ݣ�
	if(sl->_size == sl->_capicity)
	{		
		int newCapitipy = 0 ? 1 : 2 * sl->_capicity;
		//��һ������Ŀռ䣬�����������ݣ��ͷ�ԭ�пռ�
		SLDataType* tmp = (SLDataType*)malloc(sizeof(SLDataType)* newCapitipy);
		memcpy(tmp, sl->_data, sizeof(SLDataType)* sl->_size);
		free(sl->_data);

		//��һ��д��
		//sl->_data = (SLDataType*)realloc(sl->_data, sizeof(SLDataType)* newCapitipy);

		//����
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


//��̬˳����壺�ռ䲻�ɱ�
//typedef struct seqList2
//{
//	SLDataType* _data[N];
//	size_t _size;//��ЧԪ�صĸ���
//	size_t _capicity;//�����ռ�Ĵ�С
//}seqList2;
//
//void test()
//{
//	printf("��̬:%d\n", sizeof(seqList));//12,�����������С
//	printf("��̬:%d\n", sizeof(seqList2));//48�����������С
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}