#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int input = 0;
	do {

		int x, y, z, d;
		printf("\nplease input a number:\n");
		scanf("%d%d%d", &x, &y, &z);
		if (x != 0 && y != 0 && z != 0)
		{
			if (x>y)
			{
				d = x; x = y; y = d;
			}
			if (x>z)
			{
				d = z; z = x; x = d;
			}
			if (y>z)
			{
				d = y; y = z; z = d;
			}

			printf("input number is:%d %d %d\n", x, y, z);
		}
		else
		{
			printf("please input again\n");
		}
		printf("*** 1.¼ÌÐø  0.ÍË³ö***\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("continue");
		case 2:
			printf("exit");
		default:
			break;
		}
	} while (input);
	return 0;
}