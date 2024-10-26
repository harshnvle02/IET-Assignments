//#include<iostream>
//#include<string.h>
//using namespace std;
//
//class Stringcpy
//{
//	int length;
//	char* ptr;
//	
//	public:
//	
//	Stringcpy(int length, const char *ptr)
//	{
//		this->length = length;
//		ptr = new char[length + 1];
//		strcpy(this->ptr, ptr);
//		
//	}
//	
//	 Stringcpy operator=(Stringcpy &s)
//	{
//	    delete[] ptr;
//	    this->length = s.length;
//	    
//	    ptr = new char[length + 1];
//	    strcpy(ptr, s.ptr);
//	    
//	    return (*this);
//	}
//	
//	void display()
//	{
//		cout<<ptr;
//	}
//  	
//} ;
//int main()
//{
//	Stringcpy s1(5, "Rohan");
//	Stringcpy s2(5, "Rahul");
//	
//	s1.operator=(s2);
//	s1.display();
//	
//    
//}




#include<iostream>
#include<string.h>
using namespace std;
class string1
{
int len;
char* ptr;
public:
void display();
string1(char*);
string1& operator=(string1&);
string1(string1&)
{
cout<<"copy constructor is called";
}
};
string1& string1::operator=(string1& s)
{
cout<<"assignment is called\n";
len=s.len;
delete[] ptr;
ptr=new char[len+1];
strcpy(ptr,s.ptr);
return (*this);
}
void string1::display()
{
cout<<"length is "<<len<<endl;
cout<<"string is "<<ptr<<endl;
}
string1::string1(char * sptr)
{
len=strlen(sptr);
ptr=new char[len+1];
strcpy(ptr,sptr);
}
int main()
{
string1 s1("abc");
string1 s2("xyz");
s2=s1;//s2.operator=(s1)
s2.display();
}
