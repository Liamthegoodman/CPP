#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int roll;
    string name;
    int math;
    int phy;
    int chem;

public:
    Student(int roll, string name, int math, int phy, int chem) {
        this->roll = roll;
        this->name = name;
        this->math = math;
        this->phy = phy;
        this->chem = chem;
    }

    int total() {
        return math + phy + chem;
    }

    char grade() { 
        float avg = total() 
        if (avg >= 60)
            return 'A';
        else if (avg >= 40)
            return 'B';
        else
            return 'C';
    }

    void setRoll(int roll) { 
        this->roll = roll;
    }

    int getRoll() {
        return roll;
    }

    void setName(string name) { 
        this->name = name;
    }

    string getName() {
        return name;
    }

    void setMath(int math) { 
        this->math = math;
    }

    int getMath() {
        return math;
    }

    void setPhy(int phy) { 
        this->phy = phy;
    }

    int getPhy() {
        return phy;
    }

    void setChem(int chem) {
        this->chem = chem;
    }

    int getChem() {
        return chem;
    }
};

int main() {
    int roll, math, phy, chem;
    string name;

    cout << "Enter Roll number of a student::" << endl;
    cin >> roll;
    cout << "Enter your name::" << endl;
    cin >> name;
    cout << "Enter marks for 3 subjects::" << endl;
    cin >> math >> phy >> chem;

    Student s(roll, name, math, phy, chem);

    cout << "Total Marks::" << s.total() << endl;
    cout << "Grade of Student::" << s.grade() << endl;

    return 0;
}