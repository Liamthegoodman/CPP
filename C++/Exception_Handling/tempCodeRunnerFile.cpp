#include<iostream>
using namespace std;
class MyException:public exception{

};
int division (int a , int b) throw(MyException){
    if (b==0){
        throw MyException;

    }
    return a/b;
}
int main(){
    int x=10, y=0,z;
    try {


        
        z=division(x,y);
        cout<<z<<endl;
    }
    catch (MyException  e){
        cout<<"Division by zero "<<endl;
    }
    return 0;   
}