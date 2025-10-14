
#include <iostream>
using namespace std;
int value = 100;
namespace Demo {
    int value = 200;

    void display() {
        cout << "Inside Demo namespace: value = " << value << endl;
    }
}
namespace Test {
    int value = 300;

    void display() {
        cout << "Inside Test namespace: value = " << value << endl;
    }
}

int main() {
    int value = 10;
    cout << "Local value = " << value << endl;
    cout << "Global value using scope resolution ::value = " << ::value << endl;
    Demo::display();
    Test::display();
    using namespace Demo;
    cout << "Accessing Demo::value directly after using namespace: " << value << endl;

    return 0;
}

