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

//ѭ�������ϰ
//��һ�⣺��n�Ľ׳�

//int main ()
//{
//	//int n = 0;
//	//int i = 0;
//	//int a = 1;
//	//printf("����һ����n��");
//	//scanf("%d",&n);
//	//for (i=1;i<=n;i++)
//	//{	
//	//	a = a*i;
//	//}
//
//
//	//n �׳˵ĺͣ�
//	int n = 0;
//	int i = 1;
//	int a = 1;   
//	int sum = 0;
//	printf("����һ����n��");
//	scanf("%d",&n);
//	while (i<=n)
//	{
//		a = a*i;
//		printf("%d ",a);
//		sum = sum+a;
//		printf("�׳˵ĺ�=%d\n",sum);
//		i++;
//	}
//	printf("�׳˵ĺ�=%d\n",sum);	
//	return 0;
//}


//���ַ�����n����������
//

//int main ()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);  //���������Ԫ�صĸ�����
//	
//	int k = 0;//Ѱ��7���±ꣻ
//	int left = 0;//���Ԫ�ص��±ꣻ
//	int right = sz-1;//�ұ�Ԫ�ص��±ꣻ
//	int mid = 0;//�м�Ԫ�ص��±ꣻ
//	printf ("����10���ڵ�������");
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
//		printf("�ҵ��ˣ�k���±�=%d\n",mid);
//	}
//	else
//		printf("�Ҳ���\n");
//	return 0;
//}

//ʵ�ִ���ʹ"***************"��"welcome to chian !!!"����
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

