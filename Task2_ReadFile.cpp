#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("students.txt");
    string name;
    int marks;

    cout << "Student Records:\n";
    while (inFile >> name >> marks) {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }

    inFile.close();
    return 0;
}