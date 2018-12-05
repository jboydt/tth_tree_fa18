// TODO

// load file
// parse commands
// apply commands to a tree
#include "bstree.hpp"
#include "word.cpp"
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
							Word x(y);
							if (tree->find(x)){
								cout << "WORD " << y << " INCREMENTED\n";
              } else {
								cout << "WORD " << y << " INSERTED\n";
							}
							tree->insert(x);
						}else{
							cout << "MUST CREATE TREE INSTANCE\n";
						}
          }else if (nextLine.at(0)=='F'){
            if (tree!=nullptr){
							if (tree->getNodeCount()>0){
	              string y=nextLine.substr(2, 999);
								Word x(y);
								if (tree->find(x)){
									cout << "WORD " << y << " FOUND\n";
	              }else {
									cout << "WORD " << y << " NOT FOUND\n";
								}
							}else{
								cout << "TREE EMPTY\n";
							}
						}else{
							cout << "MUST CREATE TREE INSTANCE\n";
						}
          }else if (nextLine.at(0)=='R'){
            if (tree!=nullptr){
							if (tree->getNodeCount()>0){
	              string y=nextLine.substr(2, 999);
								Word x(y);
								if (tree->remove(x)){
									cout << "WORD " << y << " REMOVED\n";
	              }else {
									cout << "WORD " << y << " NOT FOUND\n";
								}
							}else{
								cout << "TREE EMPTY\n";
							}
						}else{
							cout << "MUST CREATE TREE INSTANCE\n";
						}
          }else if (nextLine.at(0) == 'N'){
						if (tree !=nullptr){
							string y = nextLine.substr(2, 999);
							Word x(y);
							cout <<"GOT "<< y <<  tree->getNodeCount();
						}else {
							cout <<"MUST CREATE TREE INSTANCE\n";
						}
					}else if (nextLine.at(0)=='G'){
            if (tree!=nullptr){
              string y=nextLine.substr(2, 999);
							Word* x=tree->get(Word(y));
							if (x!=nullptr){
									cout << "GOT " << x->getWord() << " " << x->getCount() << "\n";
								} else {
									cout << "GOT " << y <<  " 0 \n";
								}
						}else{
							cout << "MUST CREATE TREE INSTANCE\n";
						}
					}else if( nextLine.at(0) == 'E'){
						if (tree != nullptr){
							if (tree->getNodeCount() == 0){
								cout<< "TREE EMPTY\n";
							}else{
								tree->printReverseOrder();
							}
						}else {
							cout <<"MUST CREATE TREE INSTANCE\n";
						}
					} else if (nextLine.at(0)=='O'){
						if (tree!=nullptr){
							if (tree->getNodeCount()>0){
	              tree->printInOrder();
							}else{
								cout << "TREE EMPTY\n";
							}
						}else{
							cout << "MUST CREATE TREE INSTANCE\n";
						}
					}
				}
			}else {
        cout << "Unable to find/read file.\n";
        running=false;
      }
    }
  }
}
