
typedef int SLDataType;
typedef struct seqList
{
	SLDataType* _data;//需要动态开辟的数组
	size_t _size;//有效元素的个数
	size_t _capicity;//容量空间的大小
}seqList;

void initseqList(seqList* sl);//初始化结构体

//尾插一个数据
void pushBack(seqList* sl, SLDataType val);

void checkCapicity(seqList* sl);
