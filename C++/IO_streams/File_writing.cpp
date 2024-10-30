#include<iostream>
#include<fstream>
using namespace std;
int main(){
    
    ofstream ofs( "My.txt");
    ofs<<"Phone Pyae Sone Maung"<<endl;
    ofs<<19<<endl;
    ofs<<"Cyber Security"<<endl;
    ofs.close();
}