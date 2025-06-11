#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("students.txt");
    string name;
    int marks, sum = 0, count = 0;

    while (inFile >> name >> marks) {
        sum += marks;
        count++;
    }

    inFile.close();

    if (count == 0)
        cout << "No records to calculate average.\n";
    else
        cout << "Average Marks: " << (float)sum / count << endl;

    return 0;
}