#include "word.h"

Word::Word() {
  unsinged int amount = 0;
  string name;
}

Word::Word(string newWord) {
  name = newWord;
  amount = 0;
}

void Word::setWord(string newWord) {
  name = newWord;
}

void Word::incrementCount(unsigned int amount){
    amount++;
}

string Word::getWord()  {
  return uppercase(name);
}

unsigned int Word::getCount()  {
  return amount;
}

bool Word::operator<(const Word& otherWord)  {

}

bool Word::operator>(const Word& otherWord)  {

}

bool Word::operator==(const Word& otherWord)  {

}

ostream& operator<<(ostream& outs, const Word& w)  {

}
string Word::uppercase(string s){
  for(int i =0, i < s.size(), i++){
    s.at(i) = toupper(s.at(i));
  }
}
