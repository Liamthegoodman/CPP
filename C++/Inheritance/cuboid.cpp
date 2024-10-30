#include<iostream>
using namespace std;
class Rectangle{
    private:
        int length;
        int breadth;
    public:
    Rectangle(int length, int breadth){
        this -> length = length;
        this -> breadth = breadth;

    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    void setLength(int length){
        this -> length = length;
    }
    void setBreadth(int length){
        this -> breadth = breadth;
    }

    int area(){
        return length*breadth;
    }

    int parameter(){
         return 2*(length+breadth);
    }

};

class Cuboid:public Rectangle{
    private:
    int height;
    public:
    int getHeight(){
        return height;
    }
    void setHeight(int height){
        this -> height = height;
    }

    Cuboid(int l=0, int b=0, int height =0):Rectangle(l,b){
        this -> height = height;
        
    }
    int volume (){
        return getLength()*getBreadth()*height;
    }
};
int main(){
    Cuboid c(10,5,3);
    cout<<c.getLength()<<endl;
    cout<<c.volume()<<endl;
    return 0;   
}