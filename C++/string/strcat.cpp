#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s1[20]="Good";//destination 
    char s2[20]=" Morning";//source
    strcat(s1,s2);// destination,source
    cout<<s1<<endl;


return 0;   
}