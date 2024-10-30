#include<iostream>
using namespace std;
int main(){
    string str="MADAM";
    string rev="";
    int length=(int)str.length();
    rev.resize(length);
    if(str.compare(rev)==0){
        cout<<"It's palindrome";
    }
    else
    cout<<"It's not palindrome";
    


return 0;   
}