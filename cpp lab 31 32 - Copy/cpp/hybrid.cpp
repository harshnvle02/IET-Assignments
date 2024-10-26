//#include<iostream>
//using namespace std;
//
//class Person
//{
//   	public:
//   	Person()
//   	{
//   		cout<<"you are in persons constructor"<<endl;
//   		
//   		cout<<id;
//	}
//   	
//};
//class Teacher : virtual public Person
//{
//
//	
//	public:
//		
//	Teacher()
//	{
//		cout<<"you are in Teachers cnstructor:"<<endl;
//	}
//	
//};
//class Peon: virtual public Person
//{
//	public:
//	Peon()
//	{
//		cout<<"Peons constructor"<<endl;
//	}
//};
//class Student : public Teacher, public Peon
//{
//	public:
//		
//	Student()
//	{
//		cout<<"you are in student's  constructor"<<endl;
//	}
//
//};
//int main()
//{
//	Student obj;
//}







//#include<iostream>
//using namespace std;
//
//class Vehicle
//{
// 	public:
// 		
//	int doors;
//	int wheels;
//	int noOfGears;
//	
//	Vehicle()
//	{
//		cout<<"Vehicles constructor"<<endl;
//	}
//	
//
//	
//};
//class Car: virtual public Vehicle
//{
//	public:
//	Car()
//	{
//		cout<<"Car's' constructor";
//	}
//	Car(int doors)
//	{
//		this->doors = doors;
//		cout<<"No of doors: "<<doors<<endl;
//	}
//	
//};
//class Bike: virtual public Vehicle
//{
//	public:
//		
//	Bike()
//	{
//		cout<<"Bike's constructor";
//	}
//	Bike(int wheels)
//	{
//		this->wheels = wheels;
//		cout<<"No of wheels"<<wheels<<endl;
//	}
//};
//class Bicycle: public Car, public Bike
//{
//	public:
//		
//	Bicycle()
//	{
//		cout<<"Bicycle constructor";
//	}
//	Bicycle(int noOfGears, int wheels, int doors):Bike(wheels), Car(doors)
//	{
//		//cout<<"Bicycle's para constructor"<<endl;
//		cout<<"No of gears:"<<noOfGears<<endl;
//	}
//	
//};
//int main()
//{
//	
//	Bicycle obj(4,2,4);
//	
//}





//#include<iostream>
//using namespace std;
//
//class Printer 
//{
//    public:
//	
//	void scan();
//	void print()
//	{
//		cout<<"click on print on printer"<<endl;
//	}
//		
//};
//class Scanner 
//{
//	public:
//	void print()
//	{
//		cout<<"Scanner can't print"<<endl;
//	}
//};
//class AllInOne: public Printer, public Scanner 
//{
//	public:
//		
//		void display()
//		{
//			cout<<"I can do both"<<endl;
//		}
//		
//		
//		
//};
//int main()
//{
//	AllInOne obj;
//	obj.Scanner::print();
//	
//}


