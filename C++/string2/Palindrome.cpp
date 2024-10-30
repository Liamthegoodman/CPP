#include<iostream>
using namespace std;
int main(){
    string str="MADAM";
    string rev="";
    int length=(int)str.length();
    rev.resize(length);
    for (int i=0,j=length-1;i<length;i++,j--){
        rev[i]=str[j];
    }
    if(str.compare(rev)==0){
        cout<<"It's palindrome";
    }else{
        cout<<"It's not a palindrome";
    }
    
    


return 0;   
}