#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//int main ()
//{
//	int i = 0;
//	for (i=1;i<=10;i++)
//	{
//		printf("%d ",i);
//	}	
//
//	return 0 ;
//}


//猜数字游戏
void menu ()//void 是无返回值（返回值为空）
{
	printf("***************************\n");
	printf("***  1.Play  0.Exti  ******\n");
	printf("***************************\n");
	 
}

void game ()
{
	//RAND_MAX;//0x7fff = 32,767
	int input = 0;
	int Randorm_num = rand()%100+1;
	//v1 = rand() % 100;         // v1 in the range 0 to 99
	//v2 = rand() % 100 + 1;     // v2 in the range 1 to 100
	//v3 = rand() % 30 + 1985;   // v3 in the range 1985-2014

	while(1)
	{
		printf("输入所猜数字(1-100)： ");
		scanf("%d",&input);
		if(input < Randorm_num)
		{
			printf("您猜小了！\n");
			
		}
		else if (input > Randorm_num)
		{
			printf ("您猜大了！\n");
			
		}
		else
		{
			printf("恭喜您，猜对了！\n");
			break;
		}
	}

}
int main ()
{
	int input = 0;
	rand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择(0 or 1)->: ");
		scanf("%d",&input);

		switch(input)
		{
			case 1 :
				game();
				break;
			case 0:
				break;
			default:
				printf("输入错误，请重新输入！");
				break;
		}

	}
	
	while(input);
	return 0;
}
