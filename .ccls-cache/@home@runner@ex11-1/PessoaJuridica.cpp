#include "PessoaJuridica.h"
#include <iostream>
#include <string>
using namespace std;

ostream &operator<<(ostream &out, const PessoaJuridica &m) {
  out << "Empresa: " << m.nome << endl;
  out << "CNPJ: " << m.cnpj << endl;
  return out;
}
PessoaJuridica::PessoaJuridica(string n, string c) : Pessoa(n) { cnpj = c; };
void PessoaJuridica::setCnpj(string c) { cnpj = c; }
string PessoaJuridica::getCnpj() { return cnpj; }