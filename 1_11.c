#include <stdio.h>
#include <math.h>

//ʹ�ú���������������Ŀ����Ϊ��ѵ��������ַ����
//void exchange(int* x,int* y)
//{
//	int temp = 0;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main ()
//{
//	int a = 0;
//	int b = 0;
//	printf("����������������\n");
//	scanf("%d%d",&a,&b);
//	exchange(&a,&b);
//	printf("���������ֵa=%d,b=%d\n",a,b );
//	return 0;
//}


//дһ�������ж�һ�����ǲ�������

//int prime_num (int x)
//{
//	int i = 0;
//	for (i=2;i<x;i++)//�Ż�for(i=2;i<sqrt(x);i++)
//	{
//		if (x%i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main ()
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	//printf("����һ����������\n");
//	//scanf("%d",&a);
//	for (i=100;i<=200;i++)
//	{
//		b = prime_num(i);
//		if (b == 1)
//		{
//			printf("%d ",i);
//		}
//		/*else
//		
//		{
//			printf("%d ",i);
//		}	*/
//	}
//	return 0;
//}


//дһ�������ж��������ǲ�������

int leap_year(int x)
{
	if ((x%4==0 && x%100 != 0)||(x%400 == 0))
		return 1;
	else 
		return 0;
}

int main ()
{
	int i = 0;
	printf("����Ϊ�� ");
	for(i=1000;i<=2000;i++)
	{
		if(1 == leap_year(i))
		printf(" %d ",i);
	}
	return 0;
}
