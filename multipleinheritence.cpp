#include<iostream>
using namespace std;
class parent
{
    public:
		void display1()
		{
		cout<<"this is parent class"<<endl;
	    }
};
class teacher
{
	public:
		void display2()
		{
			cout<<"this is teacher class"<<endl;
		}
};
class child: public parent,public teacher
	{
		public:
			void show()
			{
				cout<<"this is child class"<<endl;
			}
	};
	int main()
	{
		child obj;
		obj.display1();
		obj.display2();
		obj.show();
		return 0;
	}
