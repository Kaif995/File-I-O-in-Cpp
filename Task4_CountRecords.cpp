#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("students.txt");
    string line;
    int count = 0;

    while (getline(inFile, line)) {
        count++;
    }

    inFile.close();
    cout << "Total number of student records: " << count << endl;
    return 0;
}