#include<iostream> 
using namespace std; 
class parent{ 
public: parent() 
{ 
cout<<"parent class construtor\n"; 
} 
~parent() 
{ 
cout<<"parent class destructor\n"; 
        
 
 
 
} 
}; 
class child :public parent{ public: 
child() 
{ 
cout<<"child class constructor\n"; 
} 
~child() 
{ 
cout<<"child class destructor\n"; 
} 
}; 
int main() 
{ 
cout<<"Roll No:24B11AI094"<<endl; 
child c; return 0; 
} 

