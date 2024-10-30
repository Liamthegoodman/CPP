#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"Constructior of Base"<<endl;
    }
    ~Base(){
        cout<<"Destructor of Base"<<endl;
    }
};

class Derived : public Base{
    public:
    Derived(){
        cout<<"Constructor of Derived"<<endl;
            }
    ~Derived(){
        cout<<"Destructor of Derived"<<endl;
    }
};

void fun(){
    Derived d;
}
int main(){
    
fun();  
}

//constructor are called from base class to derived class
//destructor ate called form derived class to base class