#include<iostream>
using namespace std;
class parent{
	public:
		void display(){
			cout<<"this is parent class"<<endl;
		}
};

class child1: public parent{
	public:
		void show1(){
			cout<<"this is 1st child class"<<endl;
		}
};
class child2: public parent{
	public:
		void show2(){
			cout<<"this is 2nd child class"<<endl;
		}
};

int main(){ 
    parent obj;
    child1 obj1;
	child2 obj2;
	obj.display();
	obj1.show1();
	obj2.show2();
	return 0;
}
