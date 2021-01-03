#include<iostream>
#include<string>

using namespace std;

//ʵ��ͨ�ö�������������ĺ���
//���� �Ӵ�С
//�㷨 ѡ������
//����  char����  int����

//����
template <class T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//�����㷨
template <class T>
void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i; //�϶����ֵ���±�
		for (int j = i + 1; j < len - 1; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j; //�������ֵ�±�
			}
		}
		if (max != i)
		{
			//���� max��i
			mySwap(arr[max], arr[i]);
		}

	}
}

//��ӡ
template <class T>
void myPrint(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test01()
{
	char charArr[] = "adfcebg";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, sizeof(charArr));
	myPrint(charArr, sizeof(charArr));
}

void test02()
{
	int intArr[] = { 5,6,7,4,32,2 };
	int num2 = sizeof(intArr) / sizeof(int);
	mySort(intArr, num2);
	myPrint(intArr, num2);
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}