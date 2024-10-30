#include<iostream>
#include<string>
using namespace std;
int main(){

    string str="How are you";
    cout<<str.find_first_of('o',1)<<endl;
    cout<<str.find_last_of('y',9)<<endl;

return 0;   
}