#include  "game.h"
void start()
{
	printf("**************************\n");
	printf("***** 1.play  2.exit *****\n");
	printf("**************************\n");
}
void gamer()
{   //数组存放棋盘信息
	char board[ROW][COL] = { 0 };
	//初始化器棋盘
	//InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
}
int test() 
{
	int input = 0;
	do
	{
		start();
		printf("please input 1 or 2\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf(" 三子棋\n");
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入");
			break;
		}
		break;
	}  
	while (input);
	return 0;
}