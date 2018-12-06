#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "bstree.hpp"
#include "word.h"

#include <string>
#include <sstream>
using std::string;
using std::stringstream;
/*
TEST_CASE("Word function test") {
  Word Apple;
  //sets the word to default to ???
  //Apple.word();
  //CHECK(Apple.getword == ???);

  //sets the word of the obj
  Apple.setWord("Apple");
  CHECK(Apple.getWord() == Apple);

  //sets the number of times the word has been pinged
  Apple.incrementCount(7);
  CHECK(Apple.getCount() == 7);

  Word Banana;

  Banana.setWord("Banana");
  CHECK(Banana == Banana);

  Banana.incrementCount(2);
  CHECK(Banana.getCount() == 2);
  CHECK(Apple < Banana);
  CHECK(Banana > Apple);
  CHECK(Apple == Apple);

  Word Banana2;
  Banana2.setWord(Banana);
  CHECK(Banana2 == Banana);
  CHECK(Banana2 == Banana);

  stringstream ss;
  ss << Apple;
  CHECK(ss.str() == "Apple");
}*/

TEST_CASE("BSTree<Word> remove") {
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

  tree.remove("giraffe");

  cout << "\n" << endl;

  tree.printInOrder();
}

/*TEST_CASE("BSTree<Word> basic"){
  BSTree<Word> tree;

  Word Apple;
  Apple.setWord("Apple");
  Word Banana;
  Banana.setWord("Banana");
  Word Cookie;
  Cookie.setWord("Cookie");
  Word Dorito;
  Dorito.setWord("Dorito");
  Word Egg;
  Egg.setWord("Egg");
  Word Fish;
  Fish.setWord("Fish");
  Word Grape;
  Grape.setWord("Grape")
  Word Ham
  Ham.setWord("Ham");
  Word Icecream;
  Icecream.setWord("Icecream");

  CHECK();

  tree.insert(Apple);
  tree.insert(Banana);
  tree.insert(Cookie);
  tree.insert(Dorito);
  tree.insert(Egg);
  tree.insert(Fish);
  tree.insert(Grape);
  tree.insert(Ham);
  tree.insert(Icecream);

  tree.printInOrder();
  tree.printReverseOrder();

  CHECK(tree.find(Apple) == true);
  CHECK(tree.find(Artichoke == false));
  CHECK(tree.find(Icecream == true) );
  CHECK(tree.getNodeCount() == 9);
  CHECK(tree.get(Apple) == Apple);


  Word Apple2;
  Apple2.setWord("Apple");
  Word Apple3;
  Apple3.setWord("Apple");
  Word Apple4;
  Apple4.setWord("Apple");

  tree.insert(Apple2);
  tree.insert(Apple3);
  tree.insert(Apple4);

  CHECK(tree.getNodeCount() == 9);
  CHECK(tree.get(Apple) == Apple);

}
*/
/*
TEST_CASE("BSTree<int> basic") {
	BSTree<int> tree;

	CHECK(tree.getNodeCount() == 0);

	tree.insert(1);
	CHECK(tree.getNodeCount() == 1);
}

TEST_CASE("BSTree<string> basicPrintInorder") {
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
TEST_CASE("BSTree<string> basicPrintReverse") {
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

  CHECK(tree.find("fish") == true);
  CHECK(tree.find("") == false);
  CHECK(tree.find("Lizard")==false);
	tree.printReverseOrder();
}
*/
