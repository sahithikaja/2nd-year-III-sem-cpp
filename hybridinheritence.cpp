#include<iostream>
using namespace std;
class Parent {
    public:
        void display() {
            cout << "This is parent class" << endl;
        }
};

class Child1 : public Parent {
    public:
        void show1() {
            cout << "This is child1 class" << endl;
        }
};

class Child2 : public Parent {
    public:
        void show2() {
            cout << "This is child2 class" << endl;
        }
};


class GrandChild : public Child1, public Child2 {
    public:
        void print() {
            cout << "This is grandchild class" << endl;
        }
};

int main() {
    GrandChild obj;
    obj.Child1::display();
    obj.Child2::display();
    obj.show1();
    obj.show2();
    obj.print();
    return 0;
}
