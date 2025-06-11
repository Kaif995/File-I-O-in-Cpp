#include <iostream>
#include<fstream>
#include<string>
using namespace std;


int main(int argc, char** argv) {
	ifstream inFile("kaif.txt");
	strinag line;
	if(inFile.is_open()){
	while(getline(inFile,line)){
		cout<<line<<endl;
	}
		
	inFile.close();
	cout<<"Data Read Successfully."<<endl;	
	}
	
	
	else{
	cout<<"Failed to open file"<<endl;	
	}
	return 0;
}
