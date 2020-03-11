#ifndef STEM_H
#define STEM_H
#include <iostream>
#include <string>
#include <vector>
namespace Gsoc{
  class Stem{
    std::string s;
    public :
      Stem();
      ~Stem();
      std::vector<char> applyStem(std::string str);
  };
  void func_stem();
}

#endif
