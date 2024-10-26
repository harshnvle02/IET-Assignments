//#include <iostream>
//using namespace std;  
//int main()  
//{  
//int array[] = {10, 20, 30};  
//cout << -2[array];  
//return 0;  
//}  



//#include <iostream>
//using namespace std;
//class Demo
//{
//    public:
//    Demo(int xx)
//    {
//        cout<< xx;
//    }
//    ~Demo()
//    {
//        cout<< "Final";
//    }
//};
//int main()
//{
//   Demo *ptr = new Demo('B');
//    return 0;
//}



//#include<iostream>
//using namespace std;
//class Base
//{  
//    public:
//    Base()
//    {
//        cout<< "Base OK. ";
//    }
//     ~Base()
//    {
//        cout<< "Base OK. ";
//    }
//   
//};
//class Derived: public Base
//{
//    public:
//    Derived()
//    {
//        cout<< "Derived OK. ";
//    }
//    ~Derived()
//    {
//        cout<< "Derived OK. ";
//    }
//};
//int main()
//{
//    Derived b;
//    return 0;
//}


//#include <iostream>  
//#include<string.h>
//using namespace std;  
//int main ()  
//{  
//    char str1[10] = "Hello";  
//    char str2[10] = "World";  
//    char str3[10];  
//    int len ;  
//    strcpy( str3, str1);  
//    strcat( str1, str2);  
//    len = strlen(str1);  
//    cout<<len<<endl;  
//    return 0;  
//} 



//#include <iostream>
//using namespace std;
//class Demo
//{
//    int x, y;
//    public:
//    void SetValue(int &a, int &b)
//    {
//        a = 100;
//        x = a;
//        y = b;
//        Display();
//    }
//    void Display()
//    {
//        cout<< x << " " << y;
//    }
//};
//int main()
//{
//    int x = 10;
//    Demo d;
//    d.SetValue(x, x);
//    return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//     char ch[] = "c++ programs";
//     int i = sizeof(ch);
//     cout << i << endl;
//}


#include<iostream>
using namespace std;
class Base
{
    int x, y;
    public:
    int z;
    public:
    Base()
    {
        x = y = z = 0;
    }
    void Display(void)
    {
        cout<< x << " " << y << " " << z << endl;
    }
};
class Derived : public Base
{
    int x, y;
    public:
    Derived(int xx = 65, int yy = 66)
    {
        y = xx;
        x = yy;
    }
    void Display(void)
    {
        cout<< x << " " << y << " "<<z;
       
    }
};
int main()
{
    Derived objD;
    objD.Display();
    return 0;
}


