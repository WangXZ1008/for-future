
typedef int SLDataType;
typedef struct seqList
{
	SLDataType* _data;//��Ҫ��̬���ٵ�����
	size_t _size;//��ЧԪ�صĸ���
	size_t _capicity;//�����ռ�Ĵ�С
}seqList;

void initseqList(seqList* sl);//��ʼ���ṹ��

//β��һ������
void pushBack(seqList* sl, SLDataType val);

void checkCapicity(seqList* sl);
