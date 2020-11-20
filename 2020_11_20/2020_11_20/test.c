#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以买多少汽水（编程实现）。
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
	printf("可以买 %d 汽水", num);

	system("pause");
	return 0;
}