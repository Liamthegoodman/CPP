#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[100];
    char *s = a;
    
    cout<<"Enter a String:";
    cin.get(s,100);
    cout<<"Length "<<strlen(s)<<endl;


return 0;   
}