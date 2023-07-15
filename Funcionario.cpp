#include "Funcionario.h"
#include <iostream>
#include <string>
using namespace std;

ostream &operator<<(ostream &out, const Funcionario &f) {
  out << "Nome: " << f.nome << endl
      << "Matricula: " << f.matricula << endl
      << "Salário Base: R$" << f.salarioBase << endl;
  return out;
}

Funcionario::Funcionario(string n, string cp, int qt, int carg, string m,
                         float s)
    : PessoaFisica(n, cp) {
  qtdHrsTrab = qt;
  cargHrMen = carg;
  matricula = m;
  salarioBase = s;
}

void Funcionario::setQtdHrsTrab(int qt) {
  if (qt < 0 || qt > cargHrMen)
    qtdHrsTrab = 0;
  else {
    qtdHrsTrab = qt;
  }
}
int Funcionario::getQtdHrsTrab() const { return qtdHrsTrab; }

void Funcionario::setCargHrMen(int cg) { cargHrMen = cg; }
int Funcionario::getCargHrMen() const { return cargHrMen; }

void Funcionario::setMatricula(string m) { matricula = m; }
string Funcionario::getMatricula() const { return matricula; }

void Funcionario::setSalarioBase(float s) { salarioBase = s; }
float Funcionario::getSalarioBase() const { return salarioBase; }

float Funcionario::calculaSalarioBruto() {
  float salario = getSalarioBase();
  int qtdHrs = getQtdHrsTrab();
  int cargHr = getCargHrMen();
  float salarioBruto = salario / (qtdHrs * cargHr);
  return salarioBruto;
}