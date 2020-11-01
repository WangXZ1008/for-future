#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>


int main(){
	//研究死循环的原因 
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i <= 12; i++){
		arr[i] = 0;
		printf("hehe\n");
	}
	return 0;
}