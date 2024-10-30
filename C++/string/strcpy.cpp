#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s1[20]="Good";//destination
    char s2[20]="";//source
    strcpy(s2,s1);// destination,source
    cout<<s2<<endl;


return 0;   
}