#include<iostream>
using namespace std;
int main(){

    //[capture-list](parameter-list)->return-type{body};

    [](){cout<<"Hello"<<endl;}();  // lambda expression for writing Hello
    [](int x,int y){cout<<"Sum is "<<x+y<<endl;}(10,30);  //lambda expression for passing parameter
    auto a =[](int x,int y)->int{return x+y;}(10,30);
    cout<<a<<endl;
    int b=11;
    [b](){cout<<b<<endl;}(); 
    


  
}