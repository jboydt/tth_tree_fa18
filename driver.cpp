// TODO

// load file
// parse commands
// apply commands to a tree
#include <fstream>
#include <functional>
#include <iostream>
using namespace std;
int main(int argc, char* argv[]){
	if (argc!=2){
		cout << "Usage: " << argv[0] << " FILENAME\n";
	}else{
    string filename=argv[1];
		bool running=true;
		unsigned int temp;
		ifstream inputFile;
		while (running){
			inputFile.open(filename);
			if (inputFile.is_open()){
				string nextLine;
      }else {
        cout << "Unable to find/read file.\n";
        running=false;
      }
    }
  }
}
