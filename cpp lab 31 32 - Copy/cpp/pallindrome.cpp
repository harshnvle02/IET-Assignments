//#include<iostream>
//#include<string.h>
//
//using namespace std;
//
//int main()
//{
//	
//	bool x;
//	
//	char str1[10];
//	
//	cout<<"Enter String1:"<<endl;
//	cin>>str1;
//	
//	char str2[10];
//	
//	strcpy(str2, strrev(str1));
//	
//	 x = strcmp(str1, str2);
//	cout<<x;
//	
//   if(strcmp(str1, str2))
//   {
//   	cout<<"string is pallindrome";
//   }
//   else{
//   	cout<<"String is not pallindrome";
//   }
//}






//#include<iostream>
//#include<string.h>
//
//using namespace std;
//
//int stringlength(char *str)
//{
//	int length = 0;
//	
//	for(int i = 0; i < strlen(str); i++)
//	{
//	    if(str[i] == ' ')
//		{
//			length--;
//		}	
//		
//		length++;
//	}
//	
//	return length;
//}
//int spaces(char *str)
//{
//	int len = strlen(str);
//	int count = 0;
//	
//	for(int  i = 0; i < len; i++)
//	{
//		if(str[i] == ' ')
//		{
//			count++;
//		}
//		
//	}
//	return count;
//}
//int vowels(char *str)
//{
//	int len = strlen(str);
//	int count = 0;
//	
//	
//	for(int  i = 0; i < len; i++)
//	{
//		if(str[i] == 'a' || str[i]  == 'e' || str[i]  =='i' || str[i]  =='o' || str[i] == 'u')
//		{
//			count++;
//		}
//		
//	}
//	return count;
//}
//void occur(char *str)
//{
//	int len = strlen(str);
//	int count = 0;
//	
//	int num = 0;
//	
//	for(int  i = 0; i < len; i++)
//	{
//	  
//	  count = 0;
//	  	
//	  for(int j = 0; j < len; j++)
//	  {
//	  	if(str[i] == str[j])
//	  	{
//	  		count++;
//		}
//		
//	  }
//	  cout<<str[i]<<":"<<count<<endl;
//	}
//	
//}
//int main()
//{
//	char str[100];
//	
//	gets(str);
//	char ch;
//	
//	cout<<"String length is:"<<stringlength(str)<<endl;
//	int space = spaces(str);
//	cout<<"No of spaces :"<<space<<endl;
//	cout<<"No of words :"<<space + 1<<endl;
//	cout<<"No of vowels :"<<vowels(str);
//	
//	occur(str);
//
//}




//#include <iostream>
//using namespace std;
//
//template <class T>
//
//T add(T &a, T &b)
//{
//  T res= a+b;
//  return res;
//}
//
//int main()
//{
////	int a=10;
////	int b=20;
//	
//	float x=12.5;
//	float y=3.3;
//
//	cout<<add(x,y);
//}



#include<iostream>
using namespace std;

template <class T>

class A
{
	T num1=12;
	T num2=13;
	

};
int main()
{
	A<double> obj;
	cout<<sizeof(obj);
	
}

