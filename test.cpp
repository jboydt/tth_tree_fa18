#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "bstree.hpp"

#include <string>
using std::string;

TEST_CASE("BSTree<int> basic") {
	BSTree<int> tree;
	
	CHECK(tree.getNodeCount() == 0);
	
	tree.insert(1);
	CHECK(tree.getNodeCount() == 1);
}	

TEST_CASE("BSTree<string> basic") {
	BSTree<string> tree;
	
	CHECK(tree.getNodeCount() == 0);
	
	tree.insert("elephant");
	tree.insert("dog");
	tree.insert("cat");
	tree.insert("snake");
	tree.insert("llama");
	tree.insert("dragon");
	tree.insert("doughnaut");
	tree.insert("giraffe");
	tree.insert("fish");
	tree.insert("shark");
	
	tree.printInOrder();
}	