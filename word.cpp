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
  return(
    uppercase(name) < uppercase(otherWord.name);
  );
}

bool Word::operator>(const Word& otherWord)  {
  return(
    uppercase(name) > uppercase(otherWord.name);
  );
}

bool Word::operator==(const Word& otherWord)  {
  return(
    uppercase(name) == uppercase(otherWord.name);
  );
}

ostream& operator<<(ostream& outs, const Word& w)  {
  outs<< w.name
      << " "
      << w.count;
  return outs;
}
string Word::uppercase(string s){
  for(int i =0, i < s.size(), i++){
    s.at(i) = toupper(s.at(i));
  }
}
