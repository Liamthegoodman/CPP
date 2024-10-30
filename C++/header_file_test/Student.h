#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student {
private:
    string fname;
    string lname;
    long id;
    double gpa;
    int age;
    string gdr;
    string father;
    static long next;

public:
    Student() {} 

    Student(string fname, string lname, int age, string gdr, string father) {
        this->fname = fname;
        this->lname = lname;
        this->age = age;
        this->gdr = gdr;
        this->father = father;
        this->id = ++next;
    }

    string getfname() const { return fname; }
    string getlname() const { return lname; }
    int getage() const { return age; }
    string getgdr() const { return gdr; }
    string getfather() const { return father; }
    long getid() const { return id; }

    friend ofstream& operator<<(ofstream& ofs, const Student& s);
    friend ifstream& operator>>(ifstream& ifs, Student& s);
    friend ostream& operator<<(ostream& os, const Student& s);
};

long Student::next = 0;

ofstream& operator<<(ofstream& ofs, const Student& s) {
    ofs << s.id << endl;
    ofs << s.fname << endl;
    ofs << s.lname << endl;
    ofs << s.age << endl;
    ofs << s.gdr << endl;
    ofs << s.father << endl;
    return ofs;
}

ifstream& operator>>(ifstream& ifs, Student& s) {
    ifs >> s.id;
    ifs >> s.fname;
    ifs >> s.lname;
    ifs >> s.age;
    ifs >> s.gdr;
    ifs >> s.father;
    return ifs;
}

ostream& operator<<(ostream& os, const Student& s) {
    os << "Student ID: " << s.id << endl;
    os << "First Name: " << s.fname << endl;
    os << "Last Name: " << s.lname << endl;
    os << "Father Name: " << s.father << endl;
    os << "Age: " << s.age << endl;
    os << "Gender: " << s.gdr << endl;
    return os;
}

#endif 