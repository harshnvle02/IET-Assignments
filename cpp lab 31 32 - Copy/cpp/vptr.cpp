#include<iostream>
using namespace std;


class Car
{
   public:
   int noOfDoors;
   int wheels;
   
   virtual void drive()
   {
   	 cout<<"Car can drive";
   };
   
   Car()
   {
   	cout<<"Car constructor"<<endl;
   };	
   
   
};
class Bmw:public Car
{
	public:
		
	Bmw()
	{
		cout<<"Bmw constructor"<<endl;
	}
	void drive()
	{
		cout<<"Bmw can drive";
	}
};
class Bicycle: public Bmw
{
	public:
	Bicycle()
	{
		cout<<"Cycles Constructor"<<endl;
	}
	
	void drive()
	{
		cout<<"cycle can't drive";
	}
	
};
int main()
{
	Car *ptr = new Bicycle();
	ptr->drive();
}
