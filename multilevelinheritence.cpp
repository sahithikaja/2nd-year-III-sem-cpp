#include<iostream>
using namespace std;
class A{
	public:
		void displayA()
		{
			cout<<"this is a 'A'class"<<endl;
		}
};
class B:public A{
	public:
		void displayB()
		{
			cout<<"this is a 'B'class"<<endl;
		}
};
class C:public B{
		public:
		void displayC()
		{
			cout<<"this is a 'C'class"<<endl;
		}
	
};
int main()
{
	C obj;
	obj.displayA();
	obj.displayB();
	obj.displayC();
}
