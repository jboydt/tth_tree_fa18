#include "word.h"

Word::Word() {

}

Word::Word(string newWord) {

}

void Word::setWord(string newWord) {

}

void Word::incrementCount(unsigned int amount){

}

string Word::getWord()  {

}

unsigned int Word::getCount()  {

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
