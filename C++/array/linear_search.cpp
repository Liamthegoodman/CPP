#include<iostream>
using namespace std;
int main(){
    int A[10];
    int n = 10;
    int key;
    int i;
    cout<<"Enter numbrs:";
    for (int i = 0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Enter the key";
    cin>>key;
    for(int i=0;i<n;i++){
        if(key==A[i]){
            cout<<"Found the key at "<<i;
            return 0;
        }
        
        

    }


cout<<"Not found";
return 0;
}