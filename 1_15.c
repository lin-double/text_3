#include < stdio.h>

//�ж�һ�����ǲ�������
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
//	printf("100-200֮�������Ϊ�� \n");
//	for (i=100;i<=200;i++)
//	{
//		if (1 == prime(i))
//			printf("%d ",i);
//	}
//	return 0 ;
//}

//�ж��ǲ�������
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

//�ú���ʵ�ֶ��ֲ���

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
//		printf("�ҵ���,�±��ǣ�%d\n",mid);
//	}
//	else	
//		printf("�Ҳ���\n");
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
//	int sz = sizeof(arr)/sizeof(arr[0])-1;//��Ԫ�صĸ������ܷ��ں���������Ϊ����ȥ������arr����Ԫ�صĵ�ַ
//	int a = binary_search(arr,i,sz);//����ȥ��������arr��Ԫ�صĵ�ַ
//	if (a == -1)
//		printf("�Ҳ���\n");
//	else 
//		printf("�ҵ��ˣ��±��ǣ�%d\n",a);
//	return 0;
//}


//�ݹ麯��
//����һ������˳���ӡ����1234,��ӡ��1 2 3 4
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
//	printf("����һ�����֣�\n");
//	scanf("%d",&num);
//	print(num);
//	printf("\n");
//	return 0;
//}


//��д��������������ʱ���������ַ�������
//int strlen(char* q)
//{
//	//int count = 0;
//	//while (*q != '\0')
//	//{
//	//	count++;//���ּ�һ
//	//	q++;//��ַ��һ
//	//}
//	//return count ;
//	//�ݹ�ķ���
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
//	int len = strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
//	printf("%d\n",len);
//	return 0;
//}

//�õݹ麯����n!
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
	printf("����һ����ֵ��");
	scanf("%d",&n);
	n = factorial(n);
	printf("n!=%d\n",n);
	return 0;
}

