#include<iostream>
#include<string>
#include "Myarr.hpp"
using namespace std;

void PrintArray(MyArray<int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}

void test01()
{
	MyArray<int> arr1(5);

	cout << "��ӡ����arr1��" << endl;
	for (int i = 0; i < 5; i++)
	{
		arr1.Push_Back(i);
	}
	PrintArray(arr1);
	
	cout << "����arr1������" << arr1.getCapacity() << endl;
	cout << "����arr1��С��" << arr1.getSize() << endl;

	//MyArray<int> arr2(arr1);
	MyArray<int> arr2(100);
	arr2 = arr1;
	//βɾ��
	arr2.Pop_Back();

	cout << "��ӡ����arr2��" << endl;
	PrintArray(arr2);

	cout << "����arr2������" << arr2.getCapacity() << endl;
	cout << "����arr2��С��" << arr2.getSize() << endl;

}

//����������������
class Person
{
public:
	Person() {};
	
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void printPersonArray(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "������" << arr[i].m_Name << " ���䣺"<< arr[i].m_Age << endl;
	}
}

void test02()
{
	MyArray<Person> arr(5);

	Person p1("����", 20);
	Person p2("����", 20);
	Person p3("����", 20);
	Person p4("����", 20);
	Person p5("ħ��", 20);

	//������뵽������
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	cout << "��ӡ����arr��" << endl;
	printPersonArray(arr);

	cout << "����arr������" << arr.getCapacity() << endl;
	cout << "����arr��С��" << arr.getSize() << endl;

	//MyArray<Person> arr2(arr);
	MyArray<Person> arr2(100);
	arr2 = arr;

	arr2.Pop_Back();

	cout << "��ӡ����arr2��" << endl;
	printPersonArray(arr2);

	cout << "����arr2������" << arr2.getCapacity() << endl;
	cout << "����arr2��С��" << arr2.getSize() << endl;
}

int main()
{
	test01();
	//test02();
	system("pause");
	return 0;
}