#include<iostream>
using namespace std;
int main(){
    int m;
    int n;
    cout<<"Enter two number:";
    cin>>m>>n;
    while(m!=n){
        if (m>n){
            m = m-n;
        }else{
            n = n-m;
        }
    }
    cout<<m;


return 0;   
}