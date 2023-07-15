#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>
using namespace std;

class Pessoa {
  friend ostream &operator<<(ostream &, const Pessoa &);

public:
  Pessoa(string);
  void setPessoa(string);
  string getPessoa() const;

protected:
  string nome;
};
#endif