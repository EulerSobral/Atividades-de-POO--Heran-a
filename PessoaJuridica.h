#ifndef PESSOA_JURIDICA_H
#define PESSOA_JURIDICA_H

#include "Pessoa.h"
#include <iostream>
#include <string>
using namespace std;

class PessoaJuridica : protected Pessoa {

  friend ostream &operator<<(ostream &, const PessoaJuridica &);

public:
  PessoaJuridica(string, string);
  void setCnpj(string);
  string getCnpj();

private:
  string cnpj;
};

#endif