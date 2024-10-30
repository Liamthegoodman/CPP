#include<iostream>
#include<string>
using namespace std;
int main(){

    string str="Hello";
    cout<<str.capacity()<<endl;
    cout<<str.append(" How are you all?Hope all are fine.and all are well")<<endl;
    cout<<str.capacity()<<endl<<str.length()<<endl;
    


return 0;   
}