#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <string.h>

int main(){
	//① 编写代码，演示多个字符从两端移动，向中间汇聚
	//char str1[] = "hello bit!";
	//char str2[] = "##########";
	//int left = 0;//左一下标为0
	//int right = strlen(str1) - 1;//字符串长度-1为右一下标
	//    printf("%s\n", str2);
	//while (left <= right){
	//	Sleep(700);
	//	system("cls");//cls清空屏幕
	//	//打印之前，先修改str2的内容
	//	str2[left] = str1[left];
	//	str2[right] = str1[right];
	//	printf("%s\n", str2);
	//	left++;
	//	right--;
	//}

	//② 编写代码实现，模拟用户登陆场景，并且只能登陆三次。
	//（只允许输入三次密码，如果密码正确则提示登陆成功，
	//如果三次均输入错误，则退出程序）
	//for (int i = 0; i < 3; i++){
	//	char input[20] = { 0 };
	//	char password[20] = "888888";
	//	printf("请输入密码：\n");
	//	scanf("%s", input);
	//	if (strcmp(input, password) == 0){
	//		printf("登陆成功！\n");
	//		break;
	//	}
	//	else{
	//		printf("密码错误！\n");
	//	}
	//}

	//在普通数组中用下标查找指定元素的位置
	/*int arr[] = { 9, 5, 2, 7, 4, 2, 1, 6 };
	int toFind = 4;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0])-1; i++){
		if (arr[i] == toFind){
			printf("目标数的下标为%d\n", i);
		}
	}*/

	//在有序数组中用下标查找指定元素的位置
	//假设为升序
	//“折半查找”  “二分查找”
	//int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	//int toFind = 2;
	////二分查找 先写出区间[left,right]
	//int left = 0;
	//int right = sizeof(arr) / sizeof(arr[0]) - 1;
	////区间不为空就继续查找
	//while (left <= right){
	//	//表示中间值下标mid
	//	int mid = (left + right) / 2;
	//	if (toFind < arr[mid]){
	//	//淘汰中间值及其右侧，修改right的值
	//		right = mid - 1;
	//	}
	//	else if (toFind > arr[mid]){
	//		//淘汰中间值及其左侧，修改left的值
	//		left = mid + 1;
	//	}
	//	else {
	//		printf("找到了：%d\n", mid);
	//		break;
	//	}
	//	if (left > right){
	//		printf("该数组中不存在此元素\n");
	//	}
	//}



	system("pause");
	return 0;
}