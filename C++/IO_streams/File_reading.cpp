#include<iostream>
#include<fstream>
using namespace std;
int main(){

    ifstream   ifs;//("My.txt");//ifs is rading the file
    if(ifs.is_open()){
        cout<<"File is Openned"<<endl;
    }
    string name;
    int roll;
    string branch;
    ifs>>name>>roll>>branch;
    cout<<"Name "<<name<<endl;
    cout<<"Roll "<<roll<<endl;
    cout<<"Branch "<<branch<<endl;

}