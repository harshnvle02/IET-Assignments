//#include<iostream>
//using namespace std;
//
//class Dynamic
//{
//	public:
//	int length;
//	int *ptr;
//	
//	Dynamic()
//	{
//		cout<<"Enter length:"<<endl;
//		cin>>length;
//		
//		ptr = new int[length];
//		
//		for(int i = 0; i < length; i++)
//		{
//			cin>>ptr[i];
//		}
//	}
//	
//	Dyanmic(Dynamic &newCons)
//	{
//		this->length = newCons.length;
//		
//		ptr = new int[length];
//		for(int i = 0; i <length; i++)
//		{
//			this->ptr[i] = newCons.ptr[i];
//		}
//	}
//	
//	void show()
//	{
//		for(int i = 0; i < length; i++)
//		{
//			cout<<ptr[i];
//		}
//	}
//};
//int main()
//{
//	Dynamic obj;
//	Dynamic obj2(obj);
//	obj2.show();
//}


//#include<iostream>
//using namespace std;
//
//class Dangptr
//{
//	public:
//		
//	int num;
//	int *ptr;
//	
//	Dangptr()
//	{
//		cout<<"Enter the number";
//		cin>>num;
//		
//		ptr = new int;
//	    *ptr = 5;	
//	}
//	
//	Dangptr(Dangptr &newObj)
//	{
//		this->num = newObj.num;
//	    ptr = new int;
//	    
//	    this->ptr = newObj.ptr;
//	}
//	
//	void show()
//	{
//		cout<<*ptr;
//	}
//	
//	~Dangptr()
//	{
//		delete ptr;
//	}
//};
//int main()
//{
//	Dangptr obj;
//	{
//		Dangptr obj2(obj);
//		obj.show();
//	}
//	
//}

#include<iostream>
using namespace std;

class Base
{
	public:
	int id;
	


};
class Child : protected Base
{
	public:
		
	void show()
	{
	  cout<<id;
	}
	
	void setId(int id)
	{
		this->id = id;
	}
	
};
int main()
{
	Child obj;
	obj.setId(5);
	obj.show();
}


