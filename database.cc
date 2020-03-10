#include <iostream>
#include <string>

#include "database.h"

Gsoc::Database::Database(){
  std::cout<<"Database object created"<<std::endl;
}

Gsoc::Database::~Database(){
  std::cout<<"Database object deleted"<<std::endl;
}

void Gsoc::Database::printId(){
  std::cout<<"Database id = "<<id<<"\t"<<std::endl;
}

int Gsoc::Database::getId(){
  return id;
}

void Gsoc::Database::setId(int x){
  id=x;
}

void ::Gsoc::database_func(){
  std::cout<<"database_func from Gsoc namespace\n";
}
