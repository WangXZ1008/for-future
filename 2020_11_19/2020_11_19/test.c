#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <assert.h>

//ģ��ʵ��memmove

//����memmove��һ�� �ڴ�������������� �ַ������������������Դ���������͵�����
//����ԭ���� void*memmove(void* dest,const void* src,size_t count);
//
//������������Ҫ��ס��1.���ķ���ֵ��void*,��������Ҳ��void*���������ſ��Դ���ͬ���͵�����
//                   2.Ŀ��dest���ܼ�const��Դsrc��const��ԭ����������Ҫ��Դsrc�п������ݵ�dest�У���Ҫ��dest
//					   ���и�ֵ������const����dest���㲻����ɴ˲�����

//					memmove�ĺô��ǿ��Դ���dest��src�����ڴ��ص�d�������

//void *my_memmove(void *dest, const void *src, int n)
//{
//	/*��Ϊchar����Ϊ1�ֽڣ����Խ�����ת��Ϊchar*
//	���в�������������Ϊ�����Ķ������ַ���*/
//	char* pdest = (char *)dest;
//	const char* psrc = (const char *)src;
//	assert(dest);
//	assert(src);
//	if (pdest <= psrc&&pdest >= psrc + n)//��������´�ǰ��󿽱�
//	{
//		while (n--)
//		{
//			*pdest = *psrc;
//		}
//	}
//	else //�������ڴ渲��ʱ�Ӻ���ǰ����
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
//	printf("�ڴ渲�������%s\n", arr + 2);
//	printf("���������%s\n", arr1);
//	system("pause");
//	return 0;
//}


//ģ��ʵ��memcpy

//memcpyָ����c��c++ʹ�õ��ڴ濽��������
//memcpy�����Ĺ����Ǵ�Դsrc��ָ���ڴ��ַ����ʼλ�ÿ�ʼ���� n���ֽ� ��Ŀ��dest��ָ���ڴ��ַ����ʼλ���С�
//memcpy��ԭ���ǣ�
//               void* memcpy��void* dest,const void* src,size_t n)

//ע��: n��������ֽ���


void* my_memcpy(void* dest, const void* src, int n)
//��Ϊmemcpy���ڴ濽�����������Ա���ʲô���Ͷ��ܽ��գ����Դ˴���void*���������ͺͷ���ֵ����
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	//��Ϊdest��ѭ�����в��Ϸ����仯�����Խ�dest�ĵ�ַ�����ָ�����ret�У�
	//�˺�ret������dest���б仯����dest��������ret���б仯�����������ret��ֵ
	while (n--)
	{
		*(char*)dest = *(const char*)src;
		//void���Ͳ��ܽ��н����ò���������Ҫ����ǿ������ת����
		//��Ϊ�˴�nָ�����ֽ�������Ҫһ���ֽ�һ���ֽڿ���������ǿ������ת��Ϊchar*��
		++(char*)dest;
		//void*���Ͳ��ܽ���++����������Ҫ����ǿ������ת����
		//����Ǻ���++����ôǿ������ת���ȶ�dest���У�����Ҫ����ǰ��++
		++(char*)src;
	}
	return ret;
}

//arr1��ӡ�������
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
	ret = my_memcpy(str1, str2, 5);//n��������ֽ���
	printf("%s\n", ret);

	int arr1[10] = { 0 };
	int arr2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	my_memcpy(arr1, arr2, 40);//�˴�n���ֽ�����40���ֽ�Ҳ����10��int��ֵ
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	print(arr1, sz);
	system("pause");
	return 0;
}