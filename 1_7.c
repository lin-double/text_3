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

//if 语句的练习

//int main()
//{
//	int age = 1;
//
//	printf("输入一个年龄：");
//	scanf("%d",&age);
//
//	if (age<18 )
//		printf("未成年\n");
//	else if (18<=age && age<28)
//		printf("青年\n");
//	else if (28<=age && age<50)
//		printf("中年\n");
//	else if (50<=age && age<99)
//		printf("老年人\n");
//	else  
//		printf("长命百岁\n");
//
//	return 0;
//}


//switch 语句的练习
//
//int main ()
//{
//	int day = 0;
//	char arr[20] = {0};
//	printf("输入一个数字：");
//	scanf("%d",&day);
//	switch(day)
//	{
//		case 1 ://case前的数字必须是整形
//			printf("星期一\n");
//			break;     //break是跳出程序的
//		case 2 :
//			printf("星期二\n");
//			break;
//		case 3 :
//			printf("星期三\n");
//			break;
//		case 4 :
//			printf("星期四\n");
//			break;
//		case 5 :
//			printf("星期五\n");
//			break;
//		case 6 :
//			printf("星期六\n");
//			break;
//		case 7 :
//			printf("星期日\n");
//			break;
//		default:
//			printf("输入错误\n");
//
//	}
//	return 0;
//}

//int main ()
//{
//	int day = 0;
//	char arr[20] = {0};
//	printf("输入一个数字：");
//	scanf("%d",&day);
//	switch(day)
//	{
//		case 1 ://case前的数字必须是整形
//		case 2 :
//		case 3 :			
//		case 4 :
//		case 5 :
//			printf("工作日\n");
//			break;
//		case 6 :
//		case 7 :
//			printf("休息日\n");
//			break;
//		default:	//是指其他的情况
//			printf("输入错误\n");
//
//	}
//	return 0;
//}


//while 循环语句
//输出1 2 3 4 5 6 7 8 9 10
// int main()
//{
//	int i = 1;
//	while(i<=10)
//	{
//		//if (i==5)
//		//	break;//则输出 1 2 3 4
//		//break 是跳出循环到return处进而结束循环；
//		//printf("%d ",i);
//		//i++;
//
//		//if (i==5)
//		//	continue;//这样会进入一个死循环
//		//printf("%d ",i);
//		//i++;
//
//		i++;
//		if (i==5)
//			continue;//这样会跳出死循环，但是i需要从0开始
//		//continue 是跳出循环到开始循环处
//		printf("%d ",i);
//	}
//	return 0;
//}

//for 循环
//打印任意给定内奇数
int main ()
{
	int i = 0;
	int count = 0;
	int a = 0;
	printf("输入一个数= ");
	scanf("%d",&a);
	for (i=1;i<=a;i++)  //先执行i=1，再判断条件，满足条件后往下执行语句，然后执行i++
	{
		if(1 == i%2)
			printf("%d ",i);
		count ++;
	}
	printf("\n奇数个数=%d\n",count);
	return 0;
}
//for循环中的break，continue关键字的使用方法和while相识


//一些for循环的变种

//int main()
//{
//	//变种1
//	//for( ; ; )
//	//{
//	//	printf("hahah\n");//永不停止打印“hahah”
//	//}
//	//变种2
//	int x,y;
//	for (x = 0,y = 0; x<2 && y <5;++x,y++)
//	{
//		printf("hehe\n");
//	}
//return 0;
//}



//do while 循环语句的练习
//至少执行一次，先执行再判断
//int main ()
//{
//	int i = 0;
//	int a = 0;
//	int count = 0;
//	printf("输入一个数值：");
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
//	printf("输出奇数的个数 = %d\n",count);
//	return 0;
//}


