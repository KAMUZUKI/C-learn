#include  "game.h"
void start()
{
	printf("**************************\n");
	printf("***** 1.play  2.exit *****\n");
	printf("**************************\n");
}
void gamer()
{   //������������Ϣ
	char board[ROW][COL] = { 0 };
	//��ʼ��������
	//InitBoard(board, ROW, COL);
	//��ӡ����
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
			printf(" ������\n");
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������");
			break;
		}
		break;
	}  
	while (input);
	return 0;
}