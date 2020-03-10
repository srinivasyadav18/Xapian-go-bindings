#include "document.h"

namespace Gsoc{
  int Document::NumberOfDocuments=0;
}
void Gsoc::Document::display(){
  std::cout<<"Displaying the current Document\n";
  for (int i=0;i<length;i++){
    std::cout<<words[i]<<"\t";
  }
  std::cout<<'\n';
}

bool Gsoc::Document::insert(std::string s){
  words.push_back(s);
  length++;
  return true;
}

Gsoc::Document::Document(){
  std::cout<<"Document object created\n";
  length=0;
  NumberOfDocuments++;
}

Gsoc::Document::~Document(){
  std::cout<<"Document object deleted\n";
  NumberOfDocuments--;
}
