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
			// TODO
		}
		
		void clear() {
			// TODO 
			// recursive private TODO
		}
		
		bool find(T data) {
			// TODO 
			// recursive private TODO
		}
		
		T* get(T data) {
			// TODO 
			// recursive private TODO
		}
		
		void printReverseOrder() {
			// TODO 
			// recursive private TODO
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
};