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


//��������Ϸ
void menu ()//void ���޷���ֵ������ֵΪ�գ�
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
		printf("������������(1-100)�� ");
		scanf("%d",&input);
		if(input < Randorm_num)
		{
			printf("����С�ˣ�\n");
			
		}
		else if (input > Randorm_num)
		{
			printf ("���´��ˣ�\n");
			
		}
		else
		{
			printf("��ϲ�����¶��ˣ�\n");
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
		printf("��ѡ��(0 or 1)->: ");
		scanf("%d",&input);

		switch(input)
		{
			case 1 :
				game();
				break;
			case 0:
				break;
			default:
				printf("����������������룡");
				break;
		}

	}
	
	while(input);
	return 0;
}
