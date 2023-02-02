#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<ctime>
#include <string>
using namespace std;

int main()
{
	//int weight1, weight2, weight3;
	//weight1 =  weight2 = weight3 = 0;
	//cout << "请输入三只小猪体重" << endl;
	//cin >> weight1 >> weight2 >> weight3;
	//cout << "猪1重：" << weight1 << "\n猪2重：" << weight2 << "\n猪3重：" << weight3 << endl;
	//if (weight1 > weight2)
	//{
	//	if (weight1 > weight3)
	//		cout << "猪1最重" << endl;
	//	else
	//		cout << "猪3最重" << endl;
	//}
	//else
	//{
	//	if (weight2 > weight3)
	//		cout << "猪2最重" << endl;
	//	else
	//		cout << "猪3最重" << endl;
	//}

	/*int num1 = 10;
	int num2 = 20;
	num1 > num2 ? num1 : num2 = 100;
	cout << "num1=" << num1 << "\nnum2=" << num2 << endl;*/

	//2.1
	//srand((unsigned)time(NULL));// 添加随机数种子，利用当前系统时间生成随机数

	//int num = rand()%100+1; // 生成1-100的随机数
	//cout << num << endl;
	//int input = 0;
	//cin >> input;
	//int times = 5;
	//while (input != num)
	//{		
	//	if(times != 0)
	//	{
	//		cout << "请输入你要猜的数字:";
	//		cin >> input;
	//		if (input > num)
	//			cout << "大了" << endl;
	//		else if (input < num)
	//			cout << "小了" << endl;
	//	}
	//	else
	//	{
	//		cout << "五次机会到了，你没猜中，结果是" << num;
	//		break;
	//	}
	//	times--;
	//}
	//if(times!=0)
	//	cout << "你猜对了，数字就是" << num << endl;

	// 2.2
	/*int num1, num2 = 0, num3, num4 = 0;
	int input = 0;
	int num = 1;
	cout << "请输入数字有几位数：";
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
			cout << "满足条件的数有:" << num << endl;
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
	//		{ // 某一位含7	  是7的倍数
	//			cout << "敲桌子" << endl;
	//			break;
	//		}
	//		num2 /= 10;
	//	}
	//	if(num2==0) // num2==0,说明while里始终没有打印,表面该数字满足条件
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
//// 行 列 合
//i = j = sum = 1;
//sum = i * j;
//for (i; i < 10; i++)
//{			// 列 <= 行数
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
//cout << "最重的体重为：" << num1;

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

// 冒泡排序	
//int arr[] = { 4,2,8,0,5,7,1,3,9 };
//int num = sizeof(arr) / sizeof(arr[0]);
//	// 总排序轮数 = 元素个数 - 1 次
//for (int i = 0; i < num - 1; i++)
//{
//		// 每轮排序次数 = 元素个数 - 当前轮数 - 1
//	for (int j = 0; j < num - i - 1; j++)
//	{
//		// 如果前一个大于后一个，进行交换
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
//cout << arr << endl;       // 整个数组首地址
//cout << arr[0] << endl;	   // 第一行首地址
//cout << &arr[0][0] << endl;// 第一个元素地址  
// // 注意，此处为具体的数值，所以要用取地址&
//cout << &arr[0][1] << endl;// 第二个元素地址
//cout << arr[1] << endl;	   // 第二行首地址

	//cout << sizeof(arr) << endl;      // 整个数组大小
	//cout << sizeof(arr[0]) << endl;	  // 第一行大小
	//cout << sizeof(arr[0][0]) << endl;// 第一个元素大小

	//cout << sizeof(arr) / sizeof(arr[0]) << endl;      // 表示有几行
	//cout << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;// 表示有几列

int arr1[][3] =
{
			  {100,100,100},
			  {90,50,100},
			  {60,70,80}
};
string arr2[3] =
{
	"张三","李四","王五"
};
for (int i = 0; i < 3; i++)
{
	int sum = 0;
	for (int j = 0; j < 3; j++)
	{
		sum += arr1[i][j];
	}
	cout << arr2[i] << "同学成绩为" << sum << endl;
}
	return 0;
}