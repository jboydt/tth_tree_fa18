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
        BSTree<Word>* tree=nullptr;
        while (getline(inputFile, nextLine)){
					if (nextLine.at(0) == '#'){
					}else if (nextLine.at(0)=='C'){
            if (tree!=nullptr)
              delete tree;
            cout << "TREE CREATED\n";
            tree=new BSTree<Word>;
          }else if (nextLine.at(0)=='X'){
            if (tree!=nullptr){
							tree->clear();
							cout << "TREE CLEARED\n";
						}else{
							cout << "MUST CREATE TREE INSTANCE\n";
						}
          }else if (nextLine.at(0)=='D'){
            if (tree!=nullptr){
							delete tree;
							cout << "TREE DELETED\n";
						}else{
							cout << "MUST CREATE TREE INSTANCE\n";
						}
          }else if (nextLine.at(0)=='I'){
            if (tree!=nullptr){
              string y=nextLine.substr(2, 999);
							if (tree->find(y)){
                
              }
							cout << "TREE DELETED\n";
						}else{
							cout << "MUST CREATE TREE INSTANCE\n";
						}
          }
      }else {
        cout << "Unable to find/read file.\n";
        running=false;
      }
    }
  }
}
