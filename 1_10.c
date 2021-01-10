#include <stdio.h>
#include <string.h>
//int main ()
//{
//	int i = 0;
//	char arr1[] = {"abc"};
//	char arr2[] = {'a','b','c'};
//
//	int sz1 = sizeof(arr1);//sizeof(arr2[0]);//计算数组所占空间的大小
//	int sz2 = strlen(arr1);//求\0前的字符个数
//	int sz3 = sizeof(arr2);
//	int sz4 = strlen(arr2);
//	//strlen 是求字符串长度 ，只能针对字符串求长度 - 属于库函数 - 使用时需引用头文件
//	//sizeof 计算变量、数组、类型的大小- 单位是字节 - 属于操作符
//	printf("%d\n",sz1);
//	printf("%d\n",sz2);
//	printf("%d\n",sz3);
//	printf("%d\n",sz4);
//	
//	return 0;
//}

//寻找两数之中最大值

//int max(int x,int y)
//{
//	int max = 0;
//	if (x<=y)
//		max = y;
//	else 
//		max = x;
//	return max;
//}
//int main ()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("输入任意两个数->: ");
//	scanf("%d %d",&a,&b);
//	printf("两个数中最大值是： %d\n",c=max(a,b));
//	return 0;
//}



//交换两个整型变量的内容

void exchange_num1(int x,int y)
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
	/*x = x^y;
	y = x^y;
	x = x^y;*/
}
void exchange_num2(int* x,int* y)
{
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
	//*x = *x^*y;
	//*y = *x^*y;
	//*x = *x^*y;
}
int main ()
{
	int a = 0;
	int b = 0;
 	printf("输入任意两个数-> \n");
 	scanf("%d%d",&a,&b);
	exchange_num1(a,b);
	printf("交换后的变量a=%d b=%d\n",a,b);
	exchange_num2(&a,&b);
	printf("交换后的变量a=%d b=%d\n",a,b);
	return 0;
}
