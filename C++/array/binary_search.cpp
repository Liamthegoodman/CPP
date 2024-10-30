#include<iostream>
using namespace std;

int main(){
    int mid, key;
    int l = 0;
    int h = 9; 
    int A[9]; 
    cout << "Enter number: "; 
    for (int i = 0; i <= h; i++){ 
        cin >> A[i];
    }
    cout << "Enter key: ";
    cin >> key;
    while (l <= h){
        mid = (l + h) / 2;
        if (key == A[mid]){
            cout << "Found at " << mid;
            return 0;
        } else if (key < A[mid]){
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << "Not found";
    return 0;
}
