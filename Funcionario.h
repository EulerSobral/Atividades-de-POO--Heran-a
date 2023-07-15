#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "PessoaFisica.h"
#include <iostream>
#include <string>
using namespace std;

class Funcionario : public PessoaFisica {
  friend ostream &operator<<(ostream &, const Funcionario &);

private:
  int qtdHrsTrab, cargHrMen;
  string matricula;
  float salarioBase;

public:
  Funcionario()
      : PessoaFisica(), qtdHrsTrab(0), cargHrMen(0), matricula(""),
        salarioBase(0.0f) {}
  Funcionario(string, string, int, int, string, float);
  void setQtdHrsTrab(int);
  int getQtdHrsTrab() const;

  void setCargHrMen(int);
  int getCargHrMen() const;

  void setMatricula(string);
  string getMatricula() const;

  void setSalarioBase(float);
  float getSalarioBase() const;

  float calculaSalarioBruto();
};

#endif