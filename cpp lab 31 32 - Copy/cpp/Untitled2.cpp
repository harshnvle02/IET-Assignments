#include<iostream>
using namespace std;


class Car{
	private:
    int price;
	int	modelNo;
	
	public:
		
		Car(int price, int modelNo)
		{
			this->price = price;
			this->modelNo = modelNo;
		}
		
	friend void frndFunc(Car &);
		
};

void frndfunc(Car &obj)
{
	cout<<"price:"<<obj.price<<endl;
	cout<<"model no:"<<obj.modelNo;
}

int main()
{
	Car obj(200000, 3214);
	obj.
}
