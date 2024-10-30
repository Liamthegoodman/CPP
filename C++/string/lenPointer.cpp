#include<iostream>
#include<string.h>
using namespace std;
int main(){

    
    char a[100];
    char *s=a;
    cout <<"Enter a string:";
    cin.getline(s,100);
    cout<<"Length"<<strlen(s)<<endl;

    


return 0;   
}