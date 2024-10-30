#include<iostream>
using namespace std;
int max(int x,int y){
    if(x>y){
        cout<< x;
    }else
        cout<< y;
}

int min(int x,int y){
    if(y>x){
        cout<< y;
    }else
        cout<< x;
}
int main(){

    int(*fp)(int,int);
    fp=max;
    (*fp)(10,5);

    fp=min;
    (*fp)(10,5);
    


return 0;   
}