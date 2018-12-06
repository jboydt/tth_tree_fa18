// TODO

// load file
// parse commands
// apply commands to a tree
#include "bstree.hpp"
#include "word.h"
#include <fstream>
#include <functional>
#include <iostream>
using namespace std;

string trim(string s) {
  int i = 0;
  while (isspace(s[i])) i++;
  int j = s.length() - 1;
  while (isspace(s[j])) j--;

  return s.substr(i, j - i + 1);
}

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
							tree = nullptr;
							cout << "TREE DELETED\n";
						}else{
							cout << "MUST CREATE TREE INSTANCE\n";
						}
          }else if (nextLine.at(0)=='I'){
            if (tree!=nullptr){
              string y=trim(nextLine.substr(2, 999));
							Word x(y);
							if (tree->find(x)){
								Word* m = tree->get(x);
								m->incrementCount();
								cout << "WORD " << y << " INCREMENTED\n";
              } else {
								tree->insert(x);
								cout << "WORD " << y << " INSERTED\n";
							}
						}else{
							cout << "MUST CREATE TREE INSTANCE\n";
						}
          }else if (nextLine.at(0)=='F'){
            if (tree!=nullptr){
							if (tree->getNodeCount()>0){
	              string y=trim(nextLine.substr(2, 999));
								Word x(y);
								if (tree->find(x)){
									cout << "FOUND " << y << endl;
	              }else {
									cout <<  y << " NOT FOUND\n";
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
	              string y=trim(nextLine.substr(2, 999));
								Word x(y);
								if (tree->remove(x)){
									cout << "REMOVED " << y << endl;
	              }else {
									cout << y << " NOT FOUND\n";
								}
							}else{
								cout << "TREE EMPTY\n";
							}
						}else{
							cout << "MUST CREATE TREE INSTANCE\n";
						}
          }else if (nextLine.at(0) == 'N'){
						if (tree !=nullptr){
							cout <<"TREE SIZE IS " <<  tree->getNodeCount() <<endl;
						}else {
							cout <<"MUST CREATE TREE INSTANCE\n";
						}
					}else if (nextLine.at(0)=='G'){
            if (tree!=nullptr){
              string y=trim(nextLine.substr(2, 999));
							Word* x = tree->get(Word(y));
							if (x!=nullptr){
									cout << "GOT " << *x << "\n";
								} else {
									cout << y <<  " NOT FOUND\n";
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
                cout << endl;
							}else{
								cout << "TREE EMPTY\n";
							}
						}else{
							cout << "MUST CREATE TREE INSTANCE\n";
						}
					}
				}
        running = false;
			}else {
        cout << "Unable to find/read file.\n";
        running=false;
      }
    }

  }
}
