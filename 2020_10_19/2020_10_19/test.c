#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

int main(){
	//写一个代码，打印100~200之间的素数
	/*int j;
	for ( int i = 100; i <= 200; i++){
		for (  j = 2; j < i ; j++){
			if (i%j == 0)
				break;
			}
		if (j == i){
			printf("%d\n", i);
		}
		
	}*/


	//编写程序数一下 1到 100 的所有整数中出现多少个数字9
	//int i = 0;
	//int sum = 0;//出现sum个数字9
	//for (i = 1; i < 100; i++){
	//	//i除以10余9为个位有9
	//	if (i % 10 == 9){
	//		sum++;
	//	}
	//	//i除以10商9为十位有9
	//	if (i / 10 == 9){
	//		sum++;
	//	}
	//}
	//printf("%d\n", sum);


	//分数求和
	//计算1/1-1/2+1/3……+1/99-1/100的值，打印出结果
	//int i ;
	//double sum1 = 0.0;
	//double sum2 = 0.0;
	//double sum = 0.0;
	//for (i = 1; i <= 100; i++){
	//	if (i % 2 == 0){
	//	    sum2 -= 1.0 / i;			
	//	}
	//	if (i % 2 == 1){
	//		sum1 += 1.0 / i;
	//	}		
	//}
	//sum = sum1 + sum2;
	//printf("%lf\n", sum);


	//二分查找
	//编写代码在一个整形 有序 数组中查找具体的某个数
	//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
	//假设为整形升序数组
	//int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	//int toFind = 2;
	//int left = 0;
	//int right = sizeof(arr) / sizeof(arr[0]) - 1;
	//
	//while (left <= right){
	//	int mid = (left + right) / 2;
	//	if (toFind < arr[mid]){
	//		//淘汰mid及其右侧，修改right的值
	//		right = mid - 1;
	//	}
	//    else if (toFind > arr[mid]){
	//		//淘汰mid及其左侧，修改left的值
	//		left = mid + 1;
	//	}
	//    else {
	//		printf("找到元素下标为：%d\n", mid);
	//		break;
	//	}
	//	if(left > right){
	//		printf("找不到\n");
	//	}
	//}


	//求最大值
	//求10个整数中的最大值
	//int i = 0;
	//int MAX = 0;
	//int arr[11] = { 0 };
	//printf("请输入任意十个整数\n");
	//for (i = 1; i <= 10; i++){
	//	scanf("%d", &arr[i]);//让输入的10个数字刚好是数组里的10个元素
	//}
	//MAX = arr[1];//先假设第一个元素即第一个数字为最大值，然后和其他数字进行比较
	//for (i = 2; i <= 10; i++){
	//	if (arr[i] > MAX);
	//	MAX = arr[i];//将较大值赋给MAX，最后所得即为最大值
	//}
	//printf("最大值为%d\n", MAX);


	//在屏幕上输出9*9乘法口诀表
	//int i, j;
	//for (i = 1; i <= 9; i++){
	//	for (j = 1; j <= i; j++){
	//		
	//		printf("%d*%d=%-3d\n", i,j,i*j);
	//		printf("\n");
	//	}
	//}	
	//答案：
	//int i = 0;
	////控制行数
	//for (i = 1; i <= 9; i++)
	//{
	//	//打印每一行内容，每行有i个表达式
	//	int j = 0;
	//	for (j = 1; j <= i; j++)
	//	{
	//		printf("%d*%d=%2d ", i, j, i*j);
	//	}
	//	printf("\n");
	//}


    //猜数字游戏
    //先写菜单
//int menu() {
//		printf("====================\n");
//		printf("======1.开始游戏=====\n");
//		printf("======0.退出游戏=====\n");
//		printf("====================\n");
//		printf("请输入您的选择：\n");
//		int choice = 0;
//		scanf("%d", &choice);
//		return choice;
//}
//	//编写游戏
//void game(){
//		//程序生成一个1~100之间随机的整数
//		int toGuess = rand() % 100 + 1;
//		while (1){
//			//从控制台读取玩家的输入
//			printf("请输入要猜的数字：\n");
//			int input = 0;
//			scanf("%d", &input);
//			//判断玩家是否猜中，并给出提示
//			if (input < toGuess){
//				printf("猜小了\n");
//			}
//			else if (input>toGuess){
//				printf("猜大了\n");
//			}
//			else{
//				printf("猜对了\n");
//				break;
//			}
//		}
//	}
//int main() {
//			//使用当前时间作为随机种子
//			srand(time(0));
//			while (1){
//				//写一个打印的菜单，和用户进行交互
//				int choice = menu();
//				if (choice == 1){
//					game();
//				}
//				else if (choice == 0){
//					printf("退出程序，再见！\n");
//					break;
//				}
//				else{
//					printf("您的输入有误，请重新输入！\n");
//				}
//			}

	//printf("%3d\n", 10);
	//printf("%6d\n", 10);
	//printf("%9d\n", 10);
	//printf("%-3d\n", 10);
    system("pause");
	return 0;
}