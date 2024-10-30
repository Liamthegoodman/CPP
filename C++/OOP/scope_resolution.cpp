#include<iostream>
using namespace std;
class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle();
        Rectangle(int l,int b);
        Rectangle(Rectangle &r);
        int getLength(){return length;}
        int getBreadth(){return breadth;}
        void setLength();
        void setBreadth();
        int area();
        int perimeter();
        bool isSquare();
        ~Rectangle();
};







int main(){

    Rectangle r1(10,10);
    cout<<"Area "<<r1.area()<<endl;
    if(r1.isSquare()){
        cout<<"Yes"<<endl;
    }
    


return 0;   
}


Rectangle :: Rectangle(){
    length=1;
    breadth =1;
}

Rectangle :: Rectangle(Rectangle &r){
    length=r.length;
    breadth =r.breadth;
}

Rectangle :: Rectangle(int l, int b){
    length=1;
    breadth =1;
}

int Rectangle :: area(){
    return length*breadth;

}

int Rectangle :: perimeter(){
    return 2*(length+breadth);
}

bool Rectangle :: isSquare(){
    return length==breadth;
}

Rectangle:: ~Rectangle (){
    cout<<"Rectangle Destroyed";
}