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

		bool remove(T data) {
			return remove(data, root);
		}

		bool find(T data) {
      return find(root,data);
		}

		T* get(T data) {
			return get(root, data);
		}

		void printReverseOrder() {
      printReverseOrder(root);
		}

		void printInOrder() {
			printInOrder(root);
		}

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
				delete n;
				n = nullptr;
				nodeCount--;
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
        cout << n->data << ',';
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
      }else if(n->data == data){
        return true;
      }
			return false;
    }

		T* get(Node* n, T data){
			if(n == nullptr) {
				return nullptr;
			}else if(n->data > data){
				return get(n->leftChild, data);
			} else if(n->data < data){
				return get(n->rightChild, data);
			}else if(n->data == data){
				return &(n->data);
			}
			return nullptr;
		}

		/*
			Removes target data from tree with calls to removeMax to remove right side values
			@param data target to be removed
			@param n a link to tree
			@return true if data is removed, false if not
		*/
		bool remove(T data, Node*& n) {
			if(n == nullptr){
				return false;
			} else if (data < n->data) {
				return remove(data, n->leftChild);
			} else if (data > n->data) {
				return remove(data, n->rightChild);
			} else {
				if(n->leftChild == nullptr) {
					Node* temproot = n;
					n = n->rightChild;
					delete temproot;
				} else {
					removeMax(n->data, n->leftChild);
				}
				nodeCount--;
				return true;
			}
		}

		/*
			Removes target data from right(max) side of TREE
			@param data the data to be removed
			@para n a link to the tree
		*/
		void removeMax(T& data, Node*& n) {
			if(n->rightChild == nullptr) {
				data = n->data;
				n = n->leftChild;
				delete n;
			} else {
				removeMax(data, n->rightChild);
			}
		}


};
