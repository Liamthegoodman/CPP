#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="WELCOME";
    for (int i=0;str[i]!='\0';i++){
        if(str[i]>='A'&& str[i]<='Z'){
                str[i]=str[i]+32;
        }
        
    }
    cout<<"Upper case to lower case: "<<str<<endl;


return 0;   
}