#include<iostream>
using namespace std;

void linear(int key,int A[],int n ){
    
    for (int i=0;i<n;i++){
        if(key==A[i]){
            cout<<"found the key at "<<i;
            return;
        }
    }
    cout<<"Not found";


    
}
int main(){
    int A[10];
    int n = 10;
    int key;
    int i;
    cout<<"Enter numbrs:";
    for (int i = 0;i<n;i++){1 2 
        cin>>A[i];
    }
    cout << "Enter key to search: ";
    cin >> key;
    linear(key,A,n);
return 0;
}