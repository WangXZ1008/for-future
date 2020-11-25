#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

//ģ��ʵ��atoi

//	atoi() �����������ַ���ת��������(int)
//	��ԭ��Ϊ:	int atoi(const char* str);

//������˵����atoi() ������ɨ����� str �ַ�����
//	����ǰ��Ŀհ��ַ�������ո�tab�����ȣ�����ͨ�� isspace() ��������⣩,
//	ֱ���������ֻ��������Ųſ�ʼ��ת�����������������ֻ��ַ�������ʱ(��\0��)�Ž���ת��������������ء�
//������ֵ������ת�������������(��� str ����ת���� int ���� str Ϊ���ַ�������ô������ 0��)

int my_atoi(const char* str){
	assert(str != NULL);
	while (*str == ' '){
		str++;
	}
	int flag = 1;//����λ
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