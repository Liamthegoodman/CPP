#include<iostream>
using namespace std;
int main(){
    int n,r;
    int sum=0;
    int m;
    m=n;
    cout<<"Enter a number:";
    cin>>n; 
    while(n>0){
        r = n%10;
        n= n/10;
        sum = sum + r*r*r;
         cout<<r<<endl;
    }
    if (m == sum){
        cout<<"Armstrong number";
    }else{
        cout<<"Not Armstrong numebr";
    }
   
    


return 0;   
}