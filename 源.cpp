#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<ctime>
#include <string>
using namespace std;

int main()
{
	//int weight1, weight2, weight3;
	//weight1 =  weight2 = weight3 = 0;
	//cout << "��������ֻС������" << endl;
	//cin >> weight1 >> weight2 >> weight3;
	//cout << "��1�أ�" << weight1 << "\n��2�أ�" << weight2 << "\n��3�أ�" << weight3 << endl;
	//if (weight1 > weight2)
	//{
	//	if (weight1 > weight3)
	//		cout << "��1����" << endl;
	//	else
	//		cout << "��3����" << endl;
	//}
	//else
	//{
	//	if (weight2 > weight3)
	//		cout << "��2����" << endl;
	//	else
	//		cout << "��3����" << endl;
	//}

	/*int num1 = 10;
	int num2 = 20;
	num1 > num2 ? num1 : num2 = 100;
	cout << "num1=" << num1 << "\nnum2=" << num2 << endl;*/

	//2.1
	//srand((unsigned)time(NULL));// �����������ӣ����õ�ǰϵͳʱ�����������

	//int num = rand()%100+1; // ����1-100�������
	//cout << num << endl;
	//int input = 0;
	//cin >> input;
	//int times = 5;
	//while (input != num)
	//{		
	//	if(times != 0)
	//	{
	//		cout << "��������Ҫ�µ�����:";
	//		cin >> input;
	//		if (input > num)
	//			cout << "����" << endl;
	//		else if (input < num)
	//			cout << "С��" << endl;
	//	}
	//	else
	//	{
	//		cout << "��λ��ᵽ�ˣ���û���У������" << num;
	//		break;
	//	}
	//	times--;
	//}
	//if(times!=0)
	//	cout << "��¶��ˣ����־���" << num << endl;

	// 2.2
	/*int num1, num2 = 0, num3, num4 = 0;
	int input = 0;
	int num = 1;
	cout << "�����������м�λ����";
	cin >> input;
	num4 = input;
	while (input--)
	{
		num *= 10;
	}
	num--;

	do
	{
		num3 = num;
		while (num3)
		{
			num1 = num3 % 10;
			num2 += pow(num1, num4);
			num3 /= 10;
		}
		if (num == num2)
			cout << "��������������:" << num << endl;
		num--;
		num2 = 0;
	} while (num);*/

	// 2.3
	//int num1 = 1, num2 = 0, num3 = 0;
	//int num = 0;
	//cin >> num;
	//for (num1; num1 <= pow(10,num); num1++)
	//{
	//	num2 = num1;
	//	while (num2)
	//	{
	//		num3 = num2 % 10;
	//		if (num3 == 7 || num1 % 7 == 0)
	//		{ // ĳһλ��7	  ��7�ı���
	//			cout << "������" << endl;
	//			break;
	//		}
	//		num2 /= 10;
	//	}
	//	if(num2==0) // num2==0,˵��while��ʼ��û�д�ӡ,�����������������
	//		cout << num1 << endl;
	//}

	// 2.4
//for (int i = 0; i < 10; i++)
//{
//	for (int j = 0; j < 10; j++)
//	{
//		cout << "* ";
//	}
//	cout << endl;
//}
//	
//int i, j, sum;
//// �� �� ��
//i = j = sum = 1;
//sum = i * j;
//for (i; i < 10; i++)
//{			// �� <= ����
//	for (int j=1; j<i+1;j++)
//	{
//		sum = j * i;
//		cout << j << "*" << i << "=" << sum;
//		cout << "\t";
//	}
//	cout << endl;
//}

//for (int i = 0; i < 100; i++)
//{
//	if (i % 3 == 0)
//		continue;
//	cout << i << " ";
//	
//}

//int arr[5] = { 300,350,500,400,250 };
//int i = 4, j = 0;
//int num1 = arr[j];
//while (i)
//{
//	if (num1< arr[j + 1])
//	{
//		 num1 = arr[j + 1];
//	}
//	i--;
//	j++;
//}
//cout << "���ص�����Ϊ��" << num1;

//int arr[] = { 1,3,2,5,4 };
//int arr1[5] = { 0 };
//int num = (sizeof(arr) / sizeof(arr[0])) - 1;
//int j = num;
//int tmp = 0;
//for (int i = 0; i < j+1; i++)
//{
//	arr1[i] = arr[num];
//	cout << arr1[i] << endl;
//	num--;
//}
//2.2
//int arr[] = { 1,3,2,5,4 };
//
//int end = (sizeof(arr) / sizeof(arr[0])) - 1;
//int start = 0;
//int tmp = 0;
//for (int i = 0; i <end + 1; i++)
//{
//	if (end < start)
//		break;
//	tmp = arr[end];
//	arr[end] = arr[start];
//	arr[start] = tmp;
//	start++, end--;
//	cout << arr[i] << endl;
//}

// ð������	
//int arr[] = { 4,2,8,0,5,7,1,3,9 };
//int num = sizeof(arr) / sizeof(arr[0]);
//	// ���������� = Ԫ�ظ��� - 1 ��
//for (int i = 0; i < num - 1; i++)
//{
//		// ÿ��������� = Ԫ�ظ��� - ��ǰ���� - 1
//	for (int j = 0; j < num - i - 1; j++)
//	{
//		// ���ǰһ�����ں�һ�������н���
//		if (arr[j] > arr[j + 1])
//		{
//			int tmp = arr[j + 1];
//			arr[j + 1] = arr[j];
//			arr[j] = tmp;
//		}
//	}
//}
//
//for (int i = 0; i < num ; i++)
//{
//	cout << arr[i] << " ";
//}

//int arr[2][3] = { {1,2,3,},
//				  {4,5,6} };
//cout << arr << endl;       // ���������׵�ַ
//cout << arr[0] << endl;	   // ��һ���׵�ַ
//cout << &arr[0][0] << endl;// ��һ��Ԫ�ص�ַ  
// // ע�⣬�˴�Ϊ�������ֵ������Ҫ��ȡ��ַ&
//cout << &arr[0][1] << endl;// �ڶ���Ԫ�ص�ַ
//cout << arr[1] << endl;	   // �ڶ����׵�ַ

	//cout << sizeof(arr) << endl;      // ���������С
	//cout << sizeof(arr[0]) << endl;	  // ��һ�д�С
	//cout << sizeof(arr[0][0]) << endl;// ��һ��Ԫ�ش�С

	//cout << sizeof(arr) / sizeof(arr[0]) << endl;      // ��ʾ�м���
	//cout << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;// ��ʾ�м���

int arr1[][3] =
{
			  {100,100,100},
			  {90,50,100},
			  {60,70,80}
};
string arr2[3] =
{
	"����","����","����"
};
for (int i = 0; i < 3; i++)
{
	int sum = 0;
	for (int j = 0; j < 3; j++)
	{
		sum += arr1[i][j];
	}
	cout << arr2[i] << "ͬѧ�ɼ�Ϊ" << sum << endl;
}
	return 0;
}