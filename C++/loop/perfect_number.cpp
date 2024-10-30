#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout<<"Enter a number:";
    cin>>n;
    for (int i=1;i<=n;i++){
        if (n%i == 0){
            sum = sum+i;
           
        }
        
    }
    if (2*n == sum){
        cout<<"perfect number:"<<sum<<endl;
    }else{
        cout<<"Not a perfect number";
    }
    


return 0;   
}