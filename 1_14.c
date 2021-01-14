#include < stdio.h>

//判断一个数是不是素数
//int prime (int x)
//{
//	int i = 0;
//	for (i=2;i<x;i++)
//	{
//		if (x%i == 0)
//		{
//			return 0;
//			//break;
//		}
//	}
//	return 1;
//}
//
//int main ()
//{
//	int i = 0;
//	printf("100-200之间的素数为： \n");
//	for (i=100;i<=200;i++)
//	{
//		if (1 == prime(i))
//			printf("%d ",i);
//	}
//	return 0 ;
//}

//判断是不是闰年
//int leap_year(int x)
//{
//	if ((x%4 ==0 && x%100 != 0)||(x%400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main ()
//{
//	int i = 0;
//	int a = 0;
//	for (i=1000;i<=2000;i++)
//	{
//		if (1 == leap_year(i))
//			printf("%d ",i);	
//	}
//	return 0;
//}

//用函数实现二分查找

//int main ()
//{
//	int i = 17;
//	int a = 0;
//	int arr [] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//	int mid = 0;
//	while (left<=right)
//	{
//		mid = (right+left)/2;
//		if (arr[mid]<i)
//		{
//			left = mid + 1 ;	
//		}
//		else if (arr[mid]>i)
//		{
//			right = mid - 1;
//		}
//		else
//		{	
//			break;
//		}
//	}
//	if (left<=right)
//	{
//		printf("找到了,下标是：%d\n",mid);
//	}
//	else	
//		printf("找不到\n");
//
//
//	//a = binary_search(arr[i]);
//	return 0;
//}
//int binary_search(int arr[],int i,int sz)
//{
//	int mid = 0;
//	int left = 0;
//	int right = sz;
//	while (left<=right)
//	{
//		mid = (right+left)/2;
//		if (arr[mid]<i)
//			left = mid+1;
//		else if (arr[mid]>i)
//			right = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main ()
//{
//	int i = 7;
//	int arr [] ={1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0])-1;//求元素的个数不能放在函数中求，因为传过去的数组arr是首元素的地址
//	int a = binary_search(arr,i,sz);//传过去的是数组arr首元素的地址
//	if (a == -1)
//		printf("找不到\n");
//	else 
//		printf("找到了，下标是：%d\n",a);
//	return 0;
//}


//递归函数
//输入一个数，顺序打印；如1234,打印：1 2 3 4
//void print (int n)
//{
//	if (n>9)
//	{
//		print(n/10);
//	}
//	printf("%d ",n%10);
//}
//int main()
//{
//	int num = 0;
//	printf("输入一个数字：\n");
//	scanf("%d",&num);
//	print(num);
//	printf("\n");
//	return 0;
//}


//编写函数不允许创建临时变量，求字符串长度
//int strlen(char* q)
//{
//	//int count = 0;
//	//while (*q != '\0')
//	//{
//	//	count++;//数字加一
//	//	q++;//地址加一
//	//}
//	//return count ;
//	//递归的方法
//	if(*q != '\0')
//	{
//		return 1+strlen(q+1);
//	}
//	else 
//		return 0;
//}
//int main ()
//{
//	char arr[] = "abcdef";
//	int len = strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("%d\n",len);
//	return 0;
//}

//用递归函数求n!
int factorial(int n)
{
	if (n<=1)
		return 1;
	else
		return n*factorial(n-1);
}
int main ()
{
	int n = 0;
	printf("输入一个数值：");
	scanf("%d",&n);
	n = factorial(n);
	printf("n!=%d\n",n);
	return 0;
}

