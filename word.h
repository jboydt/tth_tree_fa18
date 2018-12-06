#pragma once

#include <string>
#include <iostream>
#include <sstream>
#include <fstream>


using std::endl;
using std::cout;
using std::string;
using std::ostringstream;
using std::ifstream;
using std::getline;
using std::ostream;
// TODO -- need includes

class Word {
public:
  Word();
  Word(string newWord);

  void setWord(string newWord);
  void incrementCount(unsigned int amount = 1);

  string getWord();
  unsigned int getCount();

  bool operator<(const Word& otherWord);
  bool operator>(const Word& otherWord);
  bool operator==(const Word& otherWord);

  friend ostream& operator<<(ostream& outs, const Word& w);

  static string uppercase(string s);

private:
  string name;
  unsigned int amount;

};
