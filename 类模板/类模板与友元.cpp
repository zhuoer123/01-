#include<iostream>
#include<string>

using namespace std;

//ȫ�ֺ��� ����ʵ��
//��ǰ�ñ�����֪��person�Ĵ���
template<class T1, class T2>
class Person;

//����ʵ��
template<class T1, class T2>
void printPerson2(Person<T1, T2> p)
{
	cout << "����ʵ��------������" << p.m_Name << " ���䣺" << p.m_Age << endl;
}

template<class T1, class T2>
class Person
{
	//ȫ�ֺ��� ����ʵ��
	friend void printPerson(Person<T1, T2> p)
	{
		cout << "����ʵ��------������" << p.m_Name << " ���䣺" << p.m_Age << endl;
	}

	//�ӿ��ز����б�
	friend void printPerson2<>(Person<T1, T2> p);

public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	T1 m_Name;
	T2 m_Age;
};

void test01()
{
	Person<string, int>p1("Tom", 18);
	printPerson(p1);
}

void test02()
{
	Person<string, int>p2("Tom", 18);
	printPerson2(p2);
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}