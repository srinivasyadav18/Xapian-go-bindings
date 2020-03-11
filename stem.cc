#include "stem.h"

Gsoc::Stem::Stem(){
  std::cout<<"stem object created\n";
}

Gsoc::Stem::~Stem(){
  std::cout<<"stem object deleted\n";
}

std::vector<char> Gsoc::Stem::applyStem(std::string str){
  std::vector<char> v;
  for (int i=0;i<str.length();i++){
    v.push_back(str[i]);
  }
  return v;
}

void Gsoc::func_stem(){
  std::cout<<"func from Stem class header\n";
}
