#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i=0;i<=10;i++)
//	{
//		printf("%d \n",i);//hhhh
//	
//	}
//	return 0;
//}

//if ������ϰ

//int main()
//{
//	int age = 1;
//
//	printf("����һ�����䣺");
//	scanf("%d",&age);
//
//	if (age<18 )
//		printf("δ����\n");
//	else if (18<=age && age<28)
//		printf("����\n");
//	else if (28<=age && age<50)
//		printf("����\n");
//	else if (50<=age && age<99)
//		printf("������\n");
//	else  
//		printf("��������\n");
//
//	return 0;
//}


//switch ������ϰ
//
//int main ()
//{
//	int day = 0;
//	char arr[20] = {0};
//	printf("����һ�����֣�");
//	scanf("%d",&day);
//	switch(day)
//	{
//		case 1 ://caseǰ�����ֱ���������
//			printf("����һ\n");
//			break;     //break�����������
//		case 2 :
//			printf("���ڶ�\n");
//			break;
//		case 3 :
//			printf("������\n");
//			break;
//		case 4 :
//			printf("������\n");
//			break;
//		case 5 :
//			printf("������\n");
//			break;
//		case 6 :
//			printf("������\n");
//			break;
//		case 7 :
//			printf("������\n");
//			break;
//		default:
//			printf("�������\n");
//
//	}
//	return 0;
//}

//int main ()
//{
//	int day = 0;
//	char arr[20] = {0};
//	printf("����һ�����֣�");
//	scanf("%d",&day);
//	switch(day)
//	{
//		case 1 ://caseǰ�����ֱ���������
//		case 2 :
//		case 3 :			
//		case 4 :
//		case 5 :
//			printf("������\n");
//			break;
//		case 6 :
//		case 7 :
//			printf("��Ϣ��\n");
//			break;
//		default:	//��ָ���������
//			printf("�������\n");
//
//	}
//	return 0;
//}


//while ѭ�����
//���1 2 3 4 5 6 7 8 9 10
// int main()
//{
//	int i = 1;
//	while(i<=10)
//	{
//		//if (i==5)
//		//	break;//����� 1 2 3 4
//		//break ������ѭ����return����������ѭ����
//		//printf("%d ",i);
//		//i++;
//
//		//if (i==5)
//		//	continue;//���������һ����ѭ��
//		//printf("%d ",i);
//		//i++;
//
//		i++;
//		if (i==5)
//			continue;//������������ѭ��������i��Ҫ��0��ʼ
//		//continue ������ѭ������ʼѭ����
//		printf("%d ",i);
//	}
//	return 0;
//}

//for ѭ��
//��ӡ�������������
int main ()
{
	int i = 0;
	int count = 0;
	int a = 0;
	printf("����һ����= ");
	scanf("%d",&a);
	for (i=1;i<=a;i++)  //��ִ��i=1�����ж���������������������ִ����䣬Ȼ��ִ��i++
	{
		if(1 == i%2)
			printf("%d ",i);
		count ++;
	}
	printf("\n��������=%d\n",count);
	return 0;
}
//forѭ���е�break��continue�ؼ��ֵ�ʹ�÷�����while��ʶ


//һЩforѭ���ı���

//int main()
//{
//	//����1
//	//for( ; ; )
//	//{
//	//	printf("hahah\n");//����ֹͣ��ӡ��hahah��
//	//}
//	//����2
//	int x,y;
//	for (x = 0,y = 0; x<2 && y <5;++x,y++)
//	{
//		printf("hehe\n");
//	}
//return 0;
//}



//do while ѭ��������ϰ
//����ִ��һ�Σ���ִ�����ж�
//int main ()
//{
//	int i = 0;
//	int a = 0;
//	int count = 0;
//	printf("����һ����ֵ��");
//	scanf("%d",&a);
//	do
//	{
//		if(1 == i%2)
//			printf("%d ",i);
//		i++;
//		count++;
//	}
//	while (i<=a);
//	printf("\n");
//	printf("��������ĸ��� = %d\n",count);
//	return 0;
//}


