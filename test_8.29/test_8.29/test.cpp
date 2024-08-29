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

//void func(int& a)//引用作为重载的条件
//{
//	cout << "this is a func(int &a)" << endl;
//}
//void func(const int& a)//引用作为重载的条件
//{
//	cout << "this is a func(const int &a)" << endl;
//}
//
//void func1(int a)//引用作为重载的条件
//{
//	cout << "this is a func1(int a)" << endl;
//}
//void func1(int a,int b = 10)//引用作为重载的条件
//{
//	cout << "this is a func1(int a, int b)" << endl;
//}
//int main()
//{
//	//int a = 10;
//	//func(a);//调用func（int &a）
//	//func(10);//调用func（const int &a）
//
//	//func1(10);//报错：当函数参数有默认参数时报错。//二义性：因为func1(int a)、func1(int a,int b = 10)都可以调用
//	func1(10,20);
//	system("pause");
//	return 0;
//}

#define  PI 3.14
class cricle//class代表设计一个类
{
public://访问权限：公共权限
	int m_r;//属性：半径
	double calculateZC()//行为：获取圆的周长
	{
		return 2 * PI * m_r;
	}

};
int main()
{
	cricle c1;//通过圆类创建具体的圆（对象）
	c1.m_r = 10;//给圆对象的属性赋值
	cout << "圆的周长为：" << c1.calculateZC() << endl;
	system("pause");
	return 0;
}