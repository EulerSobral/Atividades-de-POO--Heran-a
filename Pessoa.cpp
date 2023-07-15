#include "Pessoa.h"
#include <iostream>
#include <string>
using namespace std;

ostream &operator<<(ostream &out, const Pessoa &n) {
  out << "Nome: " << n.nome << endl;
  return out;
}
Pessoa::Pessoa(string n) { nome = n; }
void Pessoa::setPessoa(string n) { nome = n; }
string Pessoa::getPessoa() const { return nome; }