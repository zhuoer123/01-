//#include<iostream>
//
//using namespace std;
//
//
////����ģ��
//
////���ͽ���
//void swapInt(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////����������
//void swapDouble(double& a, double& b)
//{
//	double temp = a;
//	a = b;
//	b = temp;
//}
//
////ʹ�ú���ģ��ʵ��
//template<typename T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	//swapInt(a, b);
//	mySwap<int>(a, b);
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	double c = 100.22;
//	double d = 200.22;
//
//	//swapDouble(c, d);
//	mySwap<double>(c, d);
//	cout << "c = " << c << endl;
//	cout << "d = " << d << endl;
//
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}