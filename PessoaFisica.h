#ifndef PESSOA_FISICA_H
#define PESSOA_FISICA_H

#include "Pessoa.h"
#include <iostream>
#include <string>
using namespace std;

class PessoaFisica : public Pessoa {
  friend ostream &operator<<(ostream &, PessoaFisica &);

public:
  PessoaFisica() : Pessoa(""), cpf("") {}
  PessoaFisica(string, string);
  void setCpf(string);
  string getCpf() const;

private:
  string cpf;
};

#endif