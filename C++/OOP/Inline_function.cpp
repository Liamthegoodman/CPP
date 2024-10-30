#include<iostream>
using namespace std;
class Test{
    public:
    void fun(){
        cout<<"Inline"<<endl;
    }
   inline void fun2();

};
int main(){
    Test t;
    t.fun();
    t.fun2();
    return 0;   
}

void Test :: fun2(){
    cout<<"non-inline"<<endl;
}