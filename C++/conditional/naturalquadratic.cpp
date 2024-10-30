#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Enter a, b, and c:";
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if (d==0)
{
    cout<<"root are real and equal"<<endl;
    cout<<(-b/(2*a));
}else
    if (d>0){
        cout<<"root are real and unequal"<<endl;
        cout<<(-b+sqrt(d)/(2*a));
    }
    else{
        cout<<"imaginary";
    }

return 0;   
}