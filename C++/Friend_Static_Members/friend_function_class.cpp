#include<iostream>
using namespace std;
class Your;
class Test{
    private: int a;
    protected: int b;
    public: int c;
    friend Your;
};

class Your{
    public:
  Test m;
  public:
  void fun(){
    m.a=10;
    m.b=11;
    m.c=20;
   
  }

    int getA(){return m.a;} 
    int getB(){return m.b;} 
    int getC(){ return m.c;}

};
int main(){
   
    Your u;
    u.fun();
    cout<<u.getA()<<endl;
    cout<<u.getB()<<endl;
    cout<<u.getC()<<endl;
    return 0;   
}