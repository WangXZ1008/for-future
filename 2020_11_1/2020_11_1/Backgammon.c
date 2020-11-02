#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <time.h>

#define MAX_ROW 3 //定义最大 行 列 数为3
#define MAX_COL 3
//思路:1.打印菜单进行交互		2.判断是否进入游戏 
	//3.写game函数：
		//①创建棋盘并且初始化棋盘（每个位置都设为' ') 
		//②打印棋盘（第一次打印时为空棋盘）
		//③玩家落子（输入坐标）'x'表示玩家棋子
		//④判断胜负
		//⑤电脑落子（随机落子）'o'表示电脑棋子
		//⑥判断胜负

//1.先写一个基本的交互菜单
int Menu(){
	printf("----------------------\n");
	printf("1.开始游戏\n");
	printf("0.结束游戏\n");
	printf("----------------------\n");
	printf("请输入您的选择：\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;//
}

//打印棋盘的函数
	//优化棋盘，使玩家可以看清棋盘
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
	//		printf("\n");//打印完一行进行换行
	//	}
	//}
//玩家落子的函数
void playerMove(char chessBoard[MAX_ROW][MAX_COL]){
	while (1){
		printf("请输入您要落点的坐标：\n");
		int row;
		int col;
		scanf("%d %d", &row, &col);
		//落子前 检验玩家输入位置是否非法，是否被占用
		if (row< 0 || row >= MAX_ROW 
			|| col < 0 || col >= MAX_COL){
			//位置非法
			printf("您输入的坐标有误，请重新输入！\n");
			continue;
		}
		if (chessBoard[row][col] != ' '){
			//位置不为空，被占用
			printf("此处已有棋子");
			continue;
		}
		//落子，用'x'表示玩家的棋子
		chessBoard[row][col] = 'x';
		break;
	}
}
//判断棋盘未满的函数
int isFull(char chessBoard[MAX_ROW][MAX_COL]){
	//找空格 如果找不到就是满了
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			if (chessBoard[row][col] == ' '){
				return 0;//没满
			}
		}
	}
	return 1;//满了
}
//判断胜负的函数
//'x'表示玩家获胜 'o'表示电脑获胜  'q'表示和棋  ' '表示胜负未分
int isWinner(char chessBoard[MAX_ROW][MAX_COL]){
	//检查所有行是否均为'x'或'o'
	for (int row = 0; row < MAX_ROW; row++){
		if (chessBoard[row][0] != ' '//排除空棋盘胜利的bug
			&&chessBoard[row][0] == chessBoard[row][1]
			&& chessBoard[row][0] == chessBoard[row][2]){
			return chessBoard[row][0];//直接返回，此时返回为'x'则为玩家笙，'o'为电脑胜
		}
	}
	//检查所有列 原理同上
	for (int col = 0; col < MAX_COL; col++){
		if (chessBoard[0][col] == ' '
			&&chessBoard[0][col] == chessBoard[1][col]
			&& chessBoard[0][col] == chessBoard[2][col]){
			return chessBoard[0][col];
		}
		//检查两条对角线
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
		//判断是否为和棋
		if (isFull(chessBoard)){
			return 'q';
		}
		return ' ';//表示胜负未分
	}
}
//电脑落子的函数 (随机落子)
void computerMove(char chessBoard[MAX_ROW][MAX_COL]){
	while (1){
		//电脑随机落子，% MAX保证落子坐标在范围[0,2]内，
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chessBoard[row][col] != ' '){
			//需要保证随机坐标不能是已经有子的位置
			continue;
		}
		//落子
		chessBoard[row][col] = 'o';
		break;
	}
}
//初始化为空棋盘
void init(char chessBoard[MAX_ROW][MAX_COL]){
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			chessBoard[row][col] = ' ';
		}
	}
}
//3.写game（）函数
void game(){
	//①创建棋盘 （二维数组）
	//char chessBoard[3][3]=>char chessBoard[MAX_ROW][MAX_COL] 直接写数字bug多，定义两个变量
	char chessBoard[MAX_ROW][MAX_COL] = { 0 };
	//初始化为空棋盘
	init(chessBoard);	
	char winner = ' ';
	while (1){
		//② 打印棋盘 
		printChessBoard(chessBoard);
		//③ 玩家落子 
		playerMove(chessBoard);
		//④ 判断胜负 
		winner = isWinner(chessBoard);
		if (winner != ' '){
			break;
		}
		//⑤ 电脑落子 
		computerMove(chessBoard);
		//⑥ 判断胜负 
		winner = isWinner(chessBoard);
		if (winner != ' '){
			break;
		}
	}
	printChessBoard(chessBoard);
	if (winner == 'x'){
		printf("恭喜您获得了胜利！\n");
	}
	else if (winner == 'o'){
		printf("很遗憾，您输了！\n");
	}
	else {
		printf("和棋!\n");
	}
}


int main(){
	srand((unsigned int)time(0));//将time_t强制转换成unsigned int!!!
	//while循环 2.判断是否进入游戏
	while (1){
		int choice = Menu();
		if (choice == 1){
			game();//3.在外部写一个game函数
		}
		else if (choice == 0){
			printf("goodbye!\n");
			break;
		}
		else {
			printf("您的输入有误,请重新输入!\n");
		}
	}
	system("pause");
	return 0;
}