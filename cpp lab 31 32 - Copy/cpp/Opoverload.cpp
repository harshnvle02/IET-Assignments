//#include<iostream>
//using namespace std;
//
//class Complex
//{
//	int real;
//	int img;
//	
//	public:
//		
//	Complex()
//	{
//		cout<<"Enter real:"<<endl;
//		cin>>real;
//		cout<<"Enter imaginary:"<<endl;
//		cin>>img;
//	}
//	
//    Complex operator+(Complex &c)
//    {
//    	Complex temp;
//    	 temp.real = this->real + c.real;
//    	 temp.img = this->img + c.img;
//    	 
//    	 return temp;
//	}
//	
//	void display()
//	{
//		cout<<real<<"+"<<img<<"i";
//	}
//};
//int main()
//{
//	Complex c1;
//	Complex c2;
//	Complex c3 = c1.operator+(c2);
//	
//	c3.display();
//	
//	
//}


#include<iostream>
using namespace std;

class Complex
{
	int real;
	int img;
	
	public:
	Complex(int real, int img)
	{
		this->real = real;
		this->img = img;
	}
	
	Complex operator++()
	{
		 
		this->real = this->real+1;
		this->img = this->img + 1;
		
		return (*this);
	}
	
	void display()
	{
		cout<<real<<"+"<<img<<"i";
	}
};
int main()
{

	Complex c1(1,2);
	Complex c2 = c1.operator++();
	c2.display();
	
	
};






//#include <iostream>
//using namespace std;
//#include<string.h>
//class Account {
//public:
//int accno;
//char name[10];
//static float rateOfInterest;
//Account(int accno, char* name)
//{
//this->accno = accno;
//strcpy(this->name,name);
//}
//void display()
//{
//cout<<accno<<" "<<name<<" "<<rateOfInterest<<endl;
//}
//};
//float Account::rateOfInterest=6.5;
//int main() {
//Account a1 =Account(201, "Sanjay");
//Account a2=Account(202, "Nakul");
//a1.display();
//a2.display();
//return 0;
//}
