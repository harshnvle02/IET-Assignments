#include<iostream>
using namespace std;

class Dynamic
{
	public:
	int length;
	int *ptr;
	
	Dynamic()
	{
		cout<<"enter the length: ";
		cin>>length;
		
		ptr=new int[length];
		
		for(int i=0;i<length;i++)
		{
		    cin>>ptr[i];	
		}		
	}
	
	void show(){
//		cout<<*ptr;
        
        for(int i=0;i<length;i++){
        	
        	cout<<ptr[i]<<" ";
		}
	}
};
int main()
{
    Dynamic obj;
	obj.show();	
	
}
