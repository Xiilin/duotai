// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
protected:
	int feet;
	int inches;
public:
	CFeet();
	virtual void display();//�麯��
	void setfeet(int f);
	void setinches(int i);
	int getfeet();
	int getinches();
};
CFeet::CFeet()
{
	feet = 0;
	inches = 0;
}
void CFeet::setfeet(int f)
{
	feet = f;
}
void CFeet::setinches(int i)
{
	inches = i % 12;
	feet = feet + i / 12;
}
void CFeet::display()
{
	cout << "����   " << feet << "Ӣ��   " << inches << "Ӣ��   " << endl;
}
int CFeet::getfeet()
{
	return feet;
}
int CFeet::getinches()
{
	return inches;
}
class CMyFeet :public CFeet
{
public:
	void display();
};
void CMyFeet::display()
{
	cout << "������   " << feet << "Ӣ��   " << inches << "Ӣ��   " << endl;
}
int main()
{
	CFeet *p;//����ָ��
	p = new CMyFeet;//CMyFeet AFeet;   p=&AFeet
	p->setfeet(7);
	p->setinches(6);
	p->display();
	p->CFeet::display();//P���Է��ʻ����������
	return 0;
}