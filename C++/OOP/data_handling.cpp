#include<iostream>
using namespace std;
class Rectangle{
    private:
        int length;
        int breadth;
    public:
        void setLength(int l){
            if(l<0)
               length = 1; 
            else 
                length = l;
        }
        void setBreadth(int b){
            if(b<0)
                breadth=1;
            else
                breadth=b;
        }

        int  getLength(){
            return length;
        }

        int getBreadth(){
            return breadth;
        }
        
        int area(){
            return length*breadth;
        }
        int perimeter(){
            return 2*(length+breadth);
        }
};
int main(){
   int a,b; 
   Rectangle r1;
   cout<<"Enter length: "<<endl;
   cin>>a;
   cout<<"Enter breadth: "<<endl;
   cin>>b;
   r1.setLength(a);
   r1.setBreadth(b);

   //r1.setLength(10);
   //r1.setBreadth(5);
   cout<<"The area of the rectangle is:"<<r1.area()<<endl;
    return 0;   
}