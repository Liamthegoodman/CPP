#include<iostream>
#include<memory>
using namespace std;
class Rectangle{
    int length;
    int breadth;
public:
    Rectangle(int length,int breadth){
        this -> length = length;
        this -> breadth = breadth;
    }
    int area(){
        return length * breadth;
    }
};
int main(){
    
    unique_ptr<Rectangle> ptr(new Rectangle(10,5));
    cout<<ptr->area();
    unique_ptr<Rectangle> ptr2;
    ptr2=move(ptr);
    cout<<ptr2->area();
    



  
}