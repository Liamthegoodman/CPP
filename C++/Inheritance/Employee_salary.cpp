#include<iostream>
#include<string>
using namespace std;
class Employee{
    private:
    int eid;
    string name;
    public:
    Employee(int eid, string name){
        this ->eid = eid;
        this ->name= name;
    }
    int getEid(){
        return eid;
    }
    string getName(){
        return name;
    }

};

class Fulltime : public Employee{
    private:
    int salary;
    public:
    Fulltime(int e,string n, int salary):Employee(e,n){
        this -> salary = salary;
    }
    int getSalary(){
        return salary;
    }
};

class Parttime : public Employee {
    private:
    int wage;
    public:
    Parttime(int e,string n, int wage):Employee(e,n){
        this -> wage = wage;
    }
    int getWage(){
        return wage;
    }
};



int main(){

    Fulltime p1(1,"Liam",5000);
    Parttime p2(2,"Mary",300);
    cout<<"Salary of "<<p1.getName()<<" is "<<p1.getSalary()<<endl;
    cout<<"Salary of "<<p2.getName()<<" is "<<p2.getWage()<<endl;    
    return 0;   
}