#include<iostream>
using namespace std;
int main(){

     int x = 10;
    x++;
    //cout<<x<<endl;

    const int y = 10;
    int *ptr = &y;
    ++*ptr;
    cout<<*ptr<<" "<<x<<endl;
    
}