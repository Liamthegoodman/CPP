#include<iostream>
using namespace std;
class Base{
    public:
    virtual  void fun(){
            cout<<"Function of Base"<<endl;
        }
};
class Derived:public Base{
    public:
        void fun(){
            cout<<"Function of Derived"<<endl;
        }
};
int main(){
    Derived d;
    Base *ptr = &d;
    ptr->fun();
return 0;   
}