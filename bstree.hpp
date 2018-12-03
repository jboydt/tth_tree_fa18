#pragma once

#include <iostream>
using std::cout;

template <class T>
class BSTree {
	public:
		BSTree() {
			nodeCount = 0;
			root = nullptr;
		}

		~BSTree() {
			clear(root);
		}

		void clear() {
			clear(root);
		}

		bool find(T data) {
      return find(root,data);
		}

		T* get(T data) {
			// TODO
			// recursive private TODO
			return get(data);
		}

		void printReverseOrder() {
      printReverseOrder(root);
		}

		// public inorder traversal
		void printInOrder() {
			printInOrder(root);
		}

		// public insert
		void insert(T newData) {
			insert(root, newData);
		}

		unsigned int getNodeCount() {
			return nodeCount;
		}

	private:
		unsigned int nodeCount;
		struct Node {
			T data;
			Node* leftChild;
			Node* rightChild;

			Node(T newData) {
				data = newData;
				leftChild = rightChild = nullptr;
			}
		} *root;

		//private recursive clear
		void clear (Node*& n) {
			if(n == nullptr){
				//do nothing
			}else {
				if(n->rightChild != nullptr){
					clear(n->rightChild);
					n->rightChild = nullptr;
				}
				if(n->leftChild != nullptr){
					clear(n->leftChild);
					n->leftChild = nullptr;
				}
				delete troot;
				troot = nullptr;
				size--;
			}
		}

		// private recursive insert
		void insert(Node*& n, T newData) {
			if (n == nullptr) {
				n = new Node(newData);
				nodeCount++;
			} else if (newData < n->data) {
				insert(n->leftChild, newData);
			} else if (newData > n->data) {
				insert(n->rightChild, newData);
			} else {
				// do nothing
			}
		}

		// private recursive inorder traversal
		void printInOrder(Node* n) {
			if (n == nullptr) {
				// do nothing
			} else {
				printInOrder(n->leftChild);
				cout << n->data << ',';
				printInOrder(n->rightChild);
			}
		}

    //prints the tree in reverse order.
    void printReverseOrder(Node* n) {
      if (n == nullptr) {
        // do nothing
      } else {
        printReverseOrder(n->rightChild);
        cout<< n->data << ',';
        printReverseOrder(n->leftChild);
      }
    }

    //Find a value in the tree.
    bool find(Node*n, T data){
      if(n == nullptr) {
        return false;
      }else if(n->data > data){
        return find(n->leftChild, data);
      } else if(n->data < data){
        return find(n->rightChild, data);
      }else if(n->data==data){
        return true;
      }
    }

		T* get(T data){
			if(n == nullptr) {
				return nullptr;
			}else if(n->data > data){
				return get(n->leftChild, data);
			} else if(n->data < data){
				return get(n->rightChild, data);
			}else if(n->data==data){
				return &(n->data);
			}
		}


};
