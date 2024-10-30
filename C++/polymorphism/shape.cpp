#include<iostream>
using namespace std;
class Shape{
    public:
    virtual float area()=0;
    virtual float perimeter()=0;
};
class Rectangle : public Shape{
    private:
    float length;
    float breadth;
    public:
    Rectangle(float length, float breadth){
        this -> length = length;
        this -> breadth = breadth;
    }
    float area(){
        return length*breadth;
    }
    float perimeter(){
        return 2*(length+breadth);
    }
};
class Circle:public Shape{
    private:
    float radius;
    public:
    Circle(float radius){
        this -> radius = radius;
    }
    float area(){
        return 3.142*radius;
    }
    float perimeter(){
        return 2*3.142*radius;
    }
};
int main(){
    Shape *s=new Rectangle(10,5);
    cout<<"Area of Rectangle : "<<s->area()<<endl;
    cout<<"Perimeter of Rectangle : "<<s->perimeter()<<endl;
    
    s=new Circle(10);
    
    cout<<"Area of Circle : "<<s->area()<<endl;
    cout<<"Perimeter of Circle : "<<s->perimeter()<<endl;
    
    return 0;   
}