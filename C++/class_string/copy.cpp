#include<iostream>
#include<string>
using namespace std;
int main(){

    string str="Hello";
    char s[10];
    s[5]='\0';
    str.copy(s,5);
    cout<<s<<endl;
    


return 0;   
}