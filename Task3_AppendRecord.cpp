#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("students.txt", ios::app);
    string name;
    int marks;

    cout << "Enter new student name to append: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter marks: ";
    cin >> marks;

    outFile << name << " " << marks << endl;
    outFile.close();

    cout << "Record appended successfully.\n";
    return 0;
}