#include <iostream>
#include<fstream>
using namespace std;


int main(int argc, char** argv) {
	ofstream outFile("kaif.txt");
	if(outFile.is_open()){
		outFile<<"Hello Kaif!Welcome to text file"<<endl;
		outFile<<"Another line printed"<<endl;
		outFile.close();
		cout<<"Data is Writen Successfully."<<endl;	
	}
	else{
	cout<<"Failed to open file"<<endl;	
	}
	return 0;
}
