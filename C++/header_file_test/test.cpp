#include "Student.h" // Include the header file
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Create a vector to store Student objects
    vector<Student> students;

    // Add some students
    students.push_back(Student("John", "Doe", 20, "Male", "James Doe"));
    students.push_back(Student("Jane", "Smith", 22, "Female", "Robert Smith"));
    students.push_back(Student("Michael", "Johnson", 21, "Male", "David Johnson"));

    // Print out the students
    for (const auto& student : students) {
        cout << student << endl;
    }

    // Open a file for writing
    ofstream outFile("students.txt");

    // Write the students to the file
    for (const auto& student : students) {
        outFile << student;
    }

    outFile.close();

    // Clear the vector
    students.clear();

    // Open the file for reading
    ifstream inFile("students.txt");

    // Read the students from the file
    Student student;
    while (inFile >> student) {
        students.push_back(student);
    }

    inFile.close();

    // Print out the students again
    for (const auto& student : students) {
        cout << student << endl;
    }

    return 0;
}