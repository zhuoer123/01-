#include<iostream>
using namespace std;

template<class T>
class MyArray
{
public:
	//�вι���
	MyArray(int capacity)
	{
		/*cout << "�вι���ĵ���" << endl;*/
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	//�������캯��
	MyArray(const MyArray& arr)
	{
		/*cout << "��������ĵ���" << endl;*/
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;

		//this->pAddress = arr.pAddress;

		//���
		this->pAddress = new T[arr.m_Capacity];

		//��arr�е����ݿ�������
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//β�巨
	void Push_Back(const T& val)
	{
		//�ж������Ƿ�����
		if (this->m_Capacity == this->m_Size)
		{
			cout << "��������" << endl;
			return;
		}
		this->pAddress[this->m_Size] = val; //����ĩβ��������
		this->m_Size++; //���´�С
	}

	//βɾ��
	void Pop_Back()
	{
		if (this->m_Size == 0)
		{
			return;
		}
		
		this->m_Size--; //�߼�βɾ
	}

	//ͨ���±����������Ԫ��
	T operator[](int index)
	{
		return this->pAddress[index];
	}

	//��ȡ����
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//��ȡ��С
	int getSize()
	{
		return this->m_Size;
	}

	//operator= ��ֹǳ��������
	MyArray& operator=(const MyArray& arr)
	{
		/*cout << "operator=�ĵ���" << endl;*/
		//���ж�ԭ�������Ƿ������ݣ������ͷ�
		if (this->pAddress != NULL)
		{
			delete[] pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		//���
		this->pAddress = new T[arr.m_Capacity];
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;

		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}

		return *this;
	}

	~MyArray()
	{
		/*cout << "�����ĵ���" << endl;*/
		if (pAddress != NULL)
		{
			delete[] pAddress;
			pAddress = NULL;
		}
	}


private:
	T* pAddress; //ָ��ָ��������ٵ���ʵ����
	int m_Capacity;//��������
	int m_Size;//�����С

};