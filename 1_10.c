#include <stdio.h>
#include <string.h>
//int main ()
//{
//	int i = 0;
//	char arr1[] = {"abc"};
//	char arr2[] = {'a','b','c'};
//
//	int sz1 = sizeof(arr1);//sizeof(arr2[0]);//����������ռ�ռ�Ĵ�С
//	int sz2 = strlen(arr1);//��\0ǰ���ַ�����
//	int sz3 = sizeof(arr2);
//	int sz4 = strlen(arr2);
//	//strlen �����ַ������� ��ֻ������ַ����󳤶� - ���ڿ⺯�� - ʹ��ʱ������ͷ�ļ�
//	//sizeof ������������顢���͵Ĵ�С- ��λ���ֽ� - ���ڲ�����
//	printf("%d\n",sz1);
//	printf("%d\n",sz2);
//	printf("%d\n",sz3);
//	printf("%d\n",sz4);
//	
//	return 0;
//}

//Ѱ������֮�����ֵ

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
//	printf("��������������->: ");
//	scanf("%d %d",&a,&b);
//	printf("�����������ֵ�ǣ� %d\n",c=max(a,b));
//	return 0;
//}



//�����������ͱ���������

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
 	printf("��������������-> \n");
 	scanf("%d%d",&a,&b);
	exchange_num1(a,b);
	printf("������ı���a=%d b=%d\n",a,b);
	exchange_num2(&a,&b);
	printf("������ı���a=%d b=%d\n",a,b);
	return 0;
}
