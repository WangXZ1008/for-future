#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�������������ˮ�����ʵ�֣���
int main(){
	int money = 20;
	int num = money;
	int empty = num;
	while (empty != 0 && empty != 1){
		if (empty % 2 == 0){
			num = num + (empty / 2);
			empty = empty / 2;
		}
		else if (empty % 2 != 0){
			num = num + (empty / 2);
			empty = empty % 2;
		}
	}
	printf("������ %d ��ˮ", num);

	system("pause");
	return 0;
}