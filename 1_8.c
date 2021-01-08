#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i=1;i<10;i++)
//	{
//	printf("%d\n",i);
//	}
//	return 0;
//}

//循环语句练习
//第一题：求n的阶乘

//int main ()
//{
//	//int n = 0;
//	//int i = 0;
//	//int a = 1;
//	//printf("输入一个数n：");
//	//scanf("%d",&n);
//	//for (i=1;i<=n;i++)
//	//{	
//	//	a = a*i;
//	//}
//
//
//	//n 阶乘的和；
//	int n = 0;
//	int i = 1;
//	int a = 1;   
//	int sum = 0;
//	printf("输入一个数n：");
//	scanf("%d",&n);
//	while (i<=n)
//	{
//		a = a*i;
//		printf("%d ",a);
//		sum = sum+a;
//		printf("阶乘的和=%d\n",sum);
//		i++;
//	}
//	printf("阶乘的和=%d\n",sum);	
//	return 0;
//}


//二分法查找n个有序数字
//

//int main ()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);  //计算数组的元素的个数；
//	
//	int k = 0;//寻找7的下标；
//	int left = 0;//左边元素的下标；
//	int right = sz-1;//右边元素的下标；
//	int mid = 0;//中间元素的下标；
//	printf ("输入10以内的整数：");
//	scanf("%d",&k);
//	//int i = 0;
//	while(left<=right)
//	{
//		mid = (left+right)/2;
//		if(arr[mid]<k)
//		{	
//			left = mid+1;
//			//mid = (left+right)/2;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid-1;
//			//mid = (left+right)/2;
//		}
//		else 
//			break;
//	}
//	if (left<=right)
//	{
//		printf("找到了：k的下标=%d\n",mid);
//	}
//	else
//		printf("找不到\n");
//	return 0;
//}

//实现代码使"***************"被"welcome to chian !!!"覆盖
#include <string.h>
int main ()
{
	char arr1[] = "welcome to chian !!!";
	char arr2[] = "********************";
	int left = 0;
	int right = strlen(arr1)-1;
	int i = 0;
	printf("%s\n",arr2);
	while(left<right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		//printf("%s\n",arr1);
		printf("%s\n",arr2);
	}

	return 0;
}

