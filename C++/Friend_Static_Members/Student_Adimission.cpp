#include<iostream>
#include<string.h>
using namespace std;
class Student{
    public:
    int roll;
    string name;
    static int addNo;
    Student(string name ){
        addNo++;
        roll = addNo;
        this ->name = name;
    }
    void display(){
        cout<<"Name "<<name<<endl<<"Roll "<<roll<<endl;
    }
};

int Student::addNo=0;
int main(){
    
Student s1("john");
Student s2("Ravi");
Student s3("Khan");
s1.display();
s2.display();
s3.display();
cout<<"Number of Admission "<<Student::addNo<<endl;
return 0;   
}