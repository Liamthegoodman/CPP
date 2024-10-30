#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 40, 50}; // default it will create the array size 16
    v.push_back(25);
    v.push_back(70);
    v.pop_back();

    // for (int x:v) // this is for each loop
    // cout<<x<<endl;

    vector<int>::iterator itr;
    for (itr = v.begin(); itr != v.end(); itr++) {
        cout << *itr << endl; // Dereference the iterator to print the value
    }

    return 0;
}