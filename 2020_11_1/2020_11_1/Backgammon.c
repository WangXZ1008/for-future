#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <time.h>

#define MAX_ROW 3 //������� �� �� ��Ϊ3
#define MAX_COL 3
//˼·:1.��ӡ�˵����н���		2.�ж��Ƿ������Ϸ 
	//3.дgame������
		//�ٴ������̲��ҳ�ʼ�����̣�ÿ��λ�ö���Ϊ' ') 
		//�ڴ�ӡ���̣���һ�δ�ӡʱΪ�����̣�
		//��������ӣ��������꣩'x'��ʾ�������
		//���ж�ʤ��
		//�ݵ������ӣ�������ӣ�'o'��ʾ��������
		//���ж�ʤ��

//1.��дһ�������Ľ����˵�
int Menu(){
	printf("----------------------\n");
	printf("1.��ʼ��Ϸ\n");
	printf("0.������Ϸ\n");
	printf("----------------------\n");
	printf("����������ѡ��\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;//
}

//��ӡ���̵ĺ���
	//�Ż����̣�ʹ��ҿ��Կ�������
void printChessBoard(char chessBoard[MAX_ROW][MAX_COL]){
	printf("+---+---+---+\n");
	for (int row = 0; row < MAX_ROW; row++){
		printf("| %c | %c | %c |\n",
			chessBoard[row][0], chessBoard[row][1], chessBoard[row][2]);
		printf("+---+---+---+\n");
	}
}
	//void printChessBoard(char chessBoard[MAX_ROW][MAX_COL]){
	//	for (int row = 0; row < MAX_ROW; row++){
	//		for (int col = 0; col < MAX_COL; col++){
	//			printf("%c", chessBoard[row][col]);
	//		}
	//		printf("\n");//��ӡ��һ�н��л���
	//	}
	//}
//������ӵĺ���
void playerMove(char chessBoard[MAX_ROW][MAX_COL]){
	while (1){
		printf("��������Ҫ�������꣺\n");
		int row;
		int col;
		scanf("%d %d", &row, &col);
		//����ǰ �����������λ���Ƿ�Ƿ����Ƿ�ռ��
		if (row< 0 || row >= MAX_ROW 
			|| col < 0 || col >= MAX_COL){
			//λ�÷Ƿ�
			printf("������������������������룡\n");
			continue;
		}
		if (chessBoard[row][col] != ' '){
			//λ�ò�Ϊ�գ���ռ��
			printf("�˴���������");
			continue;
		}
		//���ӣ���'x'��ʾ��ҵ�����
		chessBoard[row][col] = 'x';
		break;
	}
}
//�ж�����δ���ĺ���
int isFull(char chessBoard[MAX_ROW][MAX_COL]){
	//�ҿո� ����Ҳ�����������
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			if (chessBoard[row][col] == ' '){
				return 0;//û��
			}
		}
	}
	return 1;//����
}
//�ж�ʤ���ĺ���
//'x'��ʾ��һ�ʤ 'o'��ʾ���Ի�ʤ  'q'��ʾ����  ' '��ʾʤ��δ��
int isWinner(char chessBoard[MAX_ROW][MAX_COL]){
	//����������Ƿ��Ϊ'x'��'o'
	for (int row = 0; row < MAX_ROW; row++){
		if (chessBoard[row][0] != ' '//�ų�������ʤ����bug
			&&chessBoard[row][0] == chessBoard[row][1]
			&& chessBoard[row][0] == chessBoard[row][2]){
			return chessBoard[row][0];//ֱ�ӷ��أ���ʱ����Ϊ'x'��Ϊ����ϣ�'o'Ϊ����ʤ
		}
	}
	//��������� ԭ��ͬ��
	for (int col = 0; col < MAX_COL; col++){
		if (chessBoard[0][col] == ' '
			&&chessBoard[0][col] == chessBoard[1][col]
			&& chessBoard[0][col] == chessBoard[2][col]){
			return chessBoard[0][col];
		}
		//��������Խ���
		if (chessBoard[0][0] != ' '
			&&chessBoard[0][0] == chessBoard[1][1]
			&& chessBoard[0][0] == chessBoard[2][2]){
			return chessBoard[0][0];
		}
		if (chessBoard[0][2] != ' '
			&&chessBoard[0][2] == chessBoard[1][1]
			&& chessBoard[0][2] == chessBoard[2][0]){
			return chessBoard[0][2];
		}
		//�ж��Ƿ�Ϊ����
		if (isFull(chessBoard)){
			return 'q';
		}
		return ' ';//��ʾʤ��δ��
	}
}
//�������ӵĺ��� (�������)
void computerMove(char chessBoard[MAX_ROW][MAX_COL]){
	while (1){
		//����������ӣ�% MAX��֤���������ڷ�Χ[0,2]�ڣ�
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chessBoard[row][col] != ' '){
			//��Ҫ��֤������겻�����Ѿ����ӵ�λ��
			continue;
		}
		//����
		chessBoard[row][col] = 'o';
		break;
	}
}
//��ʼ��Ϊ������
void init(char chessBoard[MAX_ROW][MAX_COL]){
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			chessBoard[row][col] = ' ';
		}
	}
}
//3.дgame��������
void game(){
	//�ٴ������� ����ά���飩
	//char chessBoard[3][3]=>char chessBoard[MAX_ROW][MAX_COL] ֱ��д����bug�࣬������������
	char chessBoard[MAX_ROW][MAX_COL] = { 0 };
	//��ʼ��Ϊ������
	init(chessBoard);	
	char winner = ' ';
	while (1){
		//�� ��ӡ���� 
		printChessBoard(chessBoard);
		//�� ������� 
		playerMove(chessBoard);
		//�� �ж�ʤ�� 
		winner = isWinner(chessBoard);
		if (winner != ' '){
			break;
		}
		//�� �������� 
		computerMove(chessBoard);
		//�� �ж�ʤ�� 
		winner = isWinner(chessBoard);
		if (winner != ' '){
			break;
		}
	}
	printChessBoard(chessBoard);
	if (winner == 'x'){
		printf("��ϲ�������ʤ����\n");
	}
	else if (winner == 'o'){
		printf("���ź��������ˣ�\n");
	}
	else {
		printf("����!\n");
	}
}


int main(){
	srand((unsigned int)time(0));//��time_tǿ��ת����unsigned int!!!
	//whileѭ�� 2.�ж��Ƿ������Ϸ
	while (1){
		int choice = Menu();
		if (choice == 1){
			game();//3.���ⲿдһ��game����
		}
		else if (choice == 0){
			printf("goodbye!\n");
			break;
		}
		else {
			printf("������������,����������!\n");
		}
	}
	system("pause");
	return 0;
}