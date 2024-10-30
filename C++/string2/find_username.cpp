#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="phonepyaesone433@gmail.com";
    int i= str.find('@');
    string uname=str.substr(0,i);
    cout<<"Username is : "<<uname;


return 0;   
}