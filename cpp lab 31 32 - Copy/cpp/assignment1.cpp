//1)WRITE A CPP PROGRAM TO SWAP 2 VARIABLES WITHOUT USING 3RD VARIABLE.
//#include<iostream>
//using namespace std;
//int main()
//{
//   int num1, num2;
//   cout<<"Enter the num1 and num2: "<<endl;
//   cin>>num1>>num2;
//   
//   num1=num1+num2;
//   num2=num1-num2;
//   num1=num1-num2;
//   cout<<"num1: "<<num1<<endl;
//   cout<<"num2: "<<num2<<endl;
//}


//2)WRITE A CPP PROGRAM TO CHECK WHETHER THE GIVEN NUMBER IS PALINDROM OR NOT.
//#include<iostream>
//using namespace std;
//int main()
//{
//	int number;
//		cout<<"enter number: ";
//	cin>>number;
//	int rem;
//	int rev=0;
//	int num;
//	num=number;
//
//	
//	while(number>0)
//	{
//		rem=number%10;
//		rev=(rev*10)+rem;
//		number=number/10;
//	}
//	cout<<"after reversing the  number is: "<<rev<<endl;
//		cout<<"after reversing the  number is: "<<num<<endl;
//	
//	if(num==rev)
//	{
//		cout<<"number is a palindrome..";
//	}
//	else
//	{
//		cout<<"number is not a palindrome..";
//	}
//	
//	
//}


//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int j;
//	int count = 0;
//	
//	int i  = 3;
//	while(true)
//	{
//		if(count == 25)
//		{
//			break;
//		}
//		for( j = 2; j < i-1; j++)
//		{
//			if(i%j == 0)
//			{
//				break;
//			}
//		}
//		
//		if(j == i-1)
//		{
//			
//			cout<<i<<endl;
//			count++;
//		}
//		
//		i++;
//	}
//}


//#include <iostream> 
//using namespace std;  
//template<class T> 
//T swapI(T &a,T &b)  
//{  
//    T temp=a;
//    a=b;
//    b=temp;
//      
//}  
//
//template<class T>
//class Complex
//{
//	T real;
//	T img;
//	
//	public:
//		
//	Complex(T real, T img)
//	{
//		this->real = real;
//		this->img = img;
//		
//		
//	}
//	
//	void display()
//	{
//		swapI(real, img);
//		cout<<real<<"+"<<img<<"i"<<endl;
//		
//	}
//	
//};
//int main()  
//{  
//  int i =2;  
//  int j =3;
//  swapI(i,j);
//  cout<<i<<endl;
//  cout<<j<<endl;
//  
//  char a='A';
//  char b='B';
//  swap(a,b);
//  cout<<a<<endl;
//  cout<<b<<endl;
//  
//  double real = 3.22;
//  double img =2.33;
//  
//   Complex<double>obj(3.22,2.33);
//   obj.display();
//  
//   
//  
//}

#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char name[100];
	cout<<"Enter he string:";
    gets(name);
    strlen(name);
    
    for(int i = 0; i < strlen(name); i++)
    {
    	cout<<name[i];
	}
}
  
 

  
  
  
   
