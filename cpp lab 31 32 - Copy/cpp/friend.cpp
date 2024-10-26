//#include<iostream>
//using namespace std;
//
//class Student1
//{
//	int id;
//	int rollNo;
//	
//	public:
//		
//	Student1(int id, int rollNo)
//	{	
//		this->id = id;
//		this->rollNo = rollNo;	
//	}
//	
//	friend class Student2;
//};
//class Student2
//{
//   public:
//   
//   void show(Student1 &obj)
//   {
//   	 cout<<obj.id<<endl;
//   	 cout<<obj.rollNo<<endl;
//   }	
//};
//int main()
//{
//	Student1 obj(4,5);
//	Student2 obj2;
//	obj2.show(obj);
//}




//#include<iostream>
//using namespace std;
//
//
//class Car{
//	
//    int price;
//	int	modelNo;
//	
//	public:
//		
//		Car(int price, int modelNo)
//		{
//			this->price = price;
//			this->modelNo = modelNo;
//		}
//		
//	friend void frndfunc(Car &);
//		
//};
//
//void frndfunc(Car &obj)
//{
//	cout<<"price:"<<obj.price<<endl;
//	cout<<"model no:"<<obj.modelNo;
//}
//
//int main()
//{
//	Car obj(200000, 3214);
//	frndfunc(obj);
//}








//#include<iostream>
//using namespace std;
//
//class base;
//
//class anotherClass{
//	public:
//		void frndFunc(base &);
//};
//
//class base{
//   private:
//   	
//   	int private_member;
//   
//   protected:
//   	int protected_member;
//   	
//   	public:
//   		base()
//   		{
//   			private_member=10;
//   			protected_member=20;
//	}
//	friend void anotherClass::frndFunc(base &);
//};
//
//void anotherClass::frndFunc(base &obj)
//{
//	cout<<"private : "<<obj.private_member<<endl;
//	cout<<"protected: "<<obj.protected_member<<endl;
//}
//
//int main()
//{
//	base obj;
//	anotherClass obj1;
//	obj1.frndFunc(obj);
//	
//}



//#include<iostream>
//using namespace std;
//class Rohit;
//
//class Aman
//{
//	public:	
//	 Aman():number(12){}
//    
//    private:
//    	int number;
//    	
//    friend int add(Aman ,Rohit);
//};
//
//class Rohit
//{
//	public:
//		Rohit():number2(10){}
//	private:
//		int number2;
//		
//		friend int add(Aman,Rohit);
//};
//
//
//int add(Aman objA,Rohit objR)
//{
//	cout<<"Addition: "<<objA.number+objR.number2;
//}
//
//int main()
//{
//	Aman objA;
//	Rohit objR;
//	add(objA,objR);
//}


//Create a class Swap, declare three variables in it, i.e., a, b, and temp and 
//create a constructor for inputs. Declare a friend function in it. Define the friend 
//function outside the class scope by taking arguments as call by reference to pass the 
//copy of Swap Object. Perform the swap operation with Swap variables.

#include<iostream>
using namespace std;
//
//class Swap
//{
//	int i;
//	int a;
//	int temp;
//	
//	public:
//		
//	void show()
//	{
//		cout<<i<<endl;
//		cout<<a;
//	}
//		
//	Swap()
//	{
//		cout<<"Enter the first number:"<<endl;
//		cin>>i;
//		
//		cout<<"Enter the second number:"<<endl;
//		cin>>a;
//	}
//	
//	friend void swapFun(Swap &);
//};
//void swapFun(Swap &b)
//{
//	b.temp = b.i;
//	b.i = b.a;
//	b.a = b.temp;
//}
//
//int main()
//{
//	Swap obj;
//	swapFun(obj);
//	obj.show();
//	
//}




//namespace first
//{
//	void func()
//	{
//		cout<<"first namespace: ";
//	}
//	
//}
//
//namespace second
//{
//	void func()
//	{
//		cout<<"Second namespace: ";
//	}
//}
//using namespace second;
//int main()
//{
//	func();
//}


