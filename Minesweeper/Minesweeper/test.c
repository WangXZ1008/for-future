#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <time.h>

#define MAX_ROW 9
#define MAX_COL 9
#define Mine_MAX_Count 10

void Init(char showMap[MAX_ROW][MAX_COL],
		  char mineMap[MAX_ROW][MAX_COL]){
	//1.��ʼ��showMap����ÿ���ط������*
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			showMap[row][col] = '*';
		}
	}
	//2.��ʼ��mineMap,�Ȱ�ÿ���ط�������Ϊ'0'��
	//		 ������������ɸ�'1'			(0�������ף�1�����ף�
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
		//������countת�����ַ�����,
		showMap[row][col] = count + '0';
}

void Input(char showMap[MAX_ROW][MAX_COL],
	int *row, int *col){
	while (1){
		printf("���������꣺\n");
		scanf("%d %d", row, col);
		if (*row < 0 || *row >= MAX_ROW
			|| *col < 0 || *col >= MAX_COL){
			printf("������������\n");
			continue;
		}
		if (showMap[*row][*col] != '*'){
			printf("��λ���Ѿ���������\n");
			continue;
		}
		break;
	}
		
	}

void Game(){
	//1.������ͼ����ʼ��
	char showMap[MAX_ROW][MAX_COL];
	char mineMap[MAX_ROW][MAX_COL];
	Init(showMap, mineMap);//��ʼ��
	int notMineCount = 0;//�����׵ĸ���
	while (1){
		//2.��ӡ��ͼ
		Print(showMap);
		//3.��ҷ���ָ��λ��
		//4.����ҵ��������У��
		int row = 0;
		int col = 0;
		Input(showMap,&row, &col);
		
		//5.�Ƿ���ף�������ף�ֱ����Ϸʧ��
		if (mineMap[row][col] == '1'){
			printf("��Ϸʧ��\n");
			break;
		}
		//6.��������˳�����������һ���ƺ����Ϸʤ��
		notMineCount++;
		if (notMineCount == MAX_ROW*MAX_COL - Mine_MAX_Count){
			printf("��Ϸʤ��\n");
			break;
		}
		//7.������Ϸ�������ҷ����ĸ��ӻ���һ������
		Update(showMap, mineMap, row, col);
	}
}



int Menu(){
	printf("===============\n");
	printf("��ӭ����ɨ����Ϸ\n");
	printf("1.��ʼ��Ϸ\n");
	printf("0.�˳���Ϸ\n");
	printf("===============\n");
	printf("����������ѡ��\n");
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
			printf("������������\n");
		}
	}
	system("pause");
	return 0;
}