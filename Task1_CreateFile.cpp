#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("students.txt");
    string name;
    int marks, n;

    cout << "How many students to add? ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter marks: ";
        cin >> marks;
        cin.ignore();
        outFile << name << " " << marks << endl;
    }

    outFile.close();
    cout << "File created and data written successfully.\n";
    return 0;
}