#include<iostream>
using namespace std;

class Base {
    public:
    Base(){
        cout<<"Non_parameter Base"<<endl;
    }
    Base(int x){
        cout<<"Prarmeterized Base"<<x<<endl;

    }

};
class Derived :public Base{
    public:
    Derived(){
        cout<<"Non_parameter derived "<<endl;
    }
    Derived(int y):Base (y)
    {
        cout<<"Parameterized derived "<< y <<endl;
    }
};



int main(){
    Derived d(10);
    
    


return 0;   
}