#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <time.h>

#define MAX_ROW 9
#define MAX_COL 9
#define Mine_MAX_Count 10

void Init(char showMap[MAX_ROW][MAX_COL],
		  char mineMap[MAX_ROW][MAX_COL]){
	//1.初始化showMap，把每个地方都变成*
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			showMap[row][col] = '*';
		}
	}
	//2.初始化mineMap,先把每个地方都设置为'0'，
	//		 再随机产生若干个'1'			(0代表无雷，1代表雷）
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			mineMap[row][col] = '0';
		}
	}
	srand((unsigned int)time(0));
	int count = 10;
	while (count > 0){
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (mineMap[row][col] == '1'){
			continue;
		}
		mineMap[row][col] = '1';
		count--;
	}
}

void Print(char showMap[MAX_ROW][MAX_COL]){
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			printf("%c", showMap[row][col]);
		}
		printf("\n");
	}
}

void Update(char showMap[MAX_ROW][MAX_COL],
			char mineMap[MAX_ROW][MAX_COL],
			int row, int col){
	int count = 0;
	for (int r = row - 1; row <= row + 1; r++){
		for (int c = col - 1; c <= col + 1; c++){
			if (row < 0 || row >= MAX_ROW
				|| col < 0 || col <= MAX_COL){
				continue;
			}
			if (mineMap[r][c] == '1'){
				count++;
			}
		}
	}
		//把整数count转化成字符类型,
		showMap[row][col] = count + '0';
}

void Input(char showMap[MAX_ROW][MAX_COL],
	int *row, int *col){
	while (1){
		printf("请输入坐标：\n");
		scanf("%d %d", row, col);
		if (*row < 0 || *row >= MAX_ROW
			|| *col < 0 || *col >= MAX_COL){
			printf("您的输入有误\n");
			continue;
		}
		if (showMap[*row][*col] != '*'){
			printf("此位置已经被翻开了\n");
			continue;
		}
		break;
	}
		
	}

void Game(){
	//1.创建地图并初始化
	char showMap[MAX_ROW][MAX_COL];
	char mineMap[MAX_ROW][MAX_COL];
	Init(showMap, mineMap);//初始化
	int notMineCount = 0;//不是雷的个数
	while (1){
		//2.打印地图
		Print(showMap);
		//3.玩家翻开指定位置
		//4.对玩家的输入进行校验
		int row = 0;
		int col = 0;
		Input(showMap,&row, &col);
		
		//5.是否踩雷，如果踩雷，直接游戏失败
		if (mineMap[row][col] == '1'){
			printf("游戏失败\n");
			break;
		}
		//6.如果翻开了除雷以外的最后一块草坪，游戏胜利
		notMineCount++;
		if (notMineCount == MAX_ROW*MAX_COL - Mine_MAX_Count){
			printf("游戏胜利\n");
			break;
		}
		//7.否则游戏继续，且翻开的格子会变成一个数字
		Update(showMap, mineMap, row, col);
	}
}



int Menu(){
	printf("===============\n");
	printf("欢迎来的扫雷游戏\n");
	printf("1.开始游戏\n");
	printf("0.退出游戏\n");
	printf("===============\n");
	printf("请输入您的选择\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

int main(){
	while (1){
		int choice = Menu();
		if (choice == 1){
			Game();
		}
		else if (choice == 0){
			printf("goodbye\n");
			break;
		}
		else{
			printf("您的输入有误\n");
		}
	}
	system("pause");
	return 0;
}