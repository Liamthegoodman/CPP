#include<iostream>
using namespace std;
int main(){
    int A[]={4,8,6,9,5,2,7};
    int n=7;
    int max = A[0];
    for (int i=0;i<n;i++){
        if (A[i]>max){
            max=A[i];
        }
        
    }
    cout<<"Maximun number:"<<max;
    


return 0;   
}