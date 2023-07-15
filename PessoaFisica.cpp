#include "PessoaFisica.h"
#include <iostream>
#include <string>
using namespace std;

ostream &operator<<(ostream &out, PessoaFisica &n) {
  out << "Nome: " << n.nome << endl;
  out << "CPF: " << n.cpf << endl;
  return out;
}
PessoaFisica::PessoaFisica(string n, string c) : Pessoa(n) { cpf = c; }
void PessoaFisica::setCpf(string c) { cpf = c; }
string PessoaFisica::getCpf() const { return cpf; }