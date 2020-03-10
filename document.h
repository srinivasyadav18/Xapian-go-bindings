#ifndef DOCUMENT_H
#define DOCUMENT_H
#include <vector>
#include <string>
#include <iostream>
namespace Gsoc{
  class Document{
    private :
      std::vector<std::string> words;
      int length;
    public :
      Document();
      ~Document();
      void display();
      bool insert(std::string s);
      static int NumberOfDocuments;
  };
}
#endif
