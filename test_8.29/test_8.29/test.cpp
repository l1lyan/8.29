#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
//void func()
//{
//	cout << "this is a func" << endl;
//}
//void func(int a)
//{
//	cout << "this is a func(int a)" << endl;
//}
//
//int main()
//{
//	func();
//	system("pause");
//	return 0;
//}

//void func(int& a)//������Ϊ���ص�����
//{
//	cout << "this is a func(int &a)" << endl;
//}
//void func(const int& a)//������Ϊ���ص�����
//{
//	cout << "this is a func(const int &a)" << endl;
//}
//
//void func1(int a)//������Ϊ���ص�����
//{
//	cout << "this is a func1(int a)" << endl;
//}
//void func1(int a,int b = 10)//������Ϊ���ص�����
//{
//	cout << "this is a func1(int a, int b)" << endl;
//}
//int main()
//{
//	//int a = 10;
//	//func(a);//����func��int &a��
//	//func(10);//����func��const int &a��
//
//	//func1(10);//����������������Ĭ�ϲ���ʱ����//�����ԣ���Ϊfunc1(int a)��func1(int a,int b = 10)�����Ե���
//	func1(10,20);
//	system("pause");
//	return 0;
//}

#define  PI 3.14
class cricle//class�������һ����
{
public://����Ȩ�ޣ�����Ȩ��
	int m_r;//���ԣ��뾶
	double calculateZC()//��Ϊ����ȡԲ���ܳ�
	{
		return 2 * PI * m_r;
	}

};
int main()
{
	cricle c1;//ͨ��Բ�ഴ�������Բ������
	c1.m_r = 10;//��Բ��������Ը�ֵ
	cout << "Բ���ܳ�Ϊ��" << c1.calculateZC() << endl;
	system("pause");
	return 0;
}