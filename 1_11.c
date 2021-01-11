#include <stdio.h>
#include <math.h>

//使用函数交换两个数，目的是为了训练函数传址调用
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
//	printf("输入任意两个数：\n");
//	scanf("%d%d",&a,&b);
//	exchange(&a,&b);
//	printf("交换后的数值a=%d,b=%d\n",a,b );
//	return 0;
//}


//写一个函数判断一个数是不是素数

//int prime_num (int x)
//{
//	int i = 0;
//	for (i=2;i<x;i++)//优化for(i=2;i<sqrt(x);i++)
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
//	//printf("输入一个任意数：\n");
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


//写一个函数判断输入数是不是闰年

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
	printf("闰年为： ");
	for(i=1000;i<=2000;i++)
	{
		if(1 == leap_year(i))
		printf(" %d ",i);
	}
	return 0;
}
