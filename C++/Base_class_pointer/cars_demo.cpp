#include<iostream>
using namespace std;
class BasicCar{
    public:
    void start(){
        cout<<"Car started "<<endl;
    }
};

class Advanced:public BasicCar{
    public:
    void playmusic(){
        cout<<"Music playing "<<endl;
    }
} ;
int main(){
    Advanced a;
    BasicCar *p = &a;
    p->start();
    //p->playmusic();
    return 0;   
}