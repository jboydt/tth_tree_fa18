#pragma once

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

private:
  string uppercase(string s);
};
