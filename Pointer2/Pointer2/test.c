#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <assert.h>

//1.ʹ��ָ���ӡ��������

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣

//2.�ַ�������
//	дһ����������������һ���ַ��������ݡ�

//3.�������

//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222

//void reverse(char *str){
//	assert(str != NULL);//���Ժ��������str==NULL�Ļ����Ͳ���ִ�н������Ĵ���
//	int len = strlen(str);
//	int i = 0;
//	for (i = 0; i<len / 2; i++)
//	{
//		char s = str[i];
//		str[i] = str[len - 1 - i];//�Ѻ���Ļ���ǰ���
//		str[len - 1 - i] = s;//��ǰ��Ļ��������
//	}
//	//str[len]='\0';//����Ҫ���������Ǿ�û�иı�str[len]��ֵ����ԭ������'\0'
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