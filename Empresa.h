/*
  private: lista de funcionários e lista de clientes
  public: adicionar e remover clientes e funcionários, calcular o salário bruto
  e imprimir os dados dos clientes e funcionários de todos os funcionários
*/
#ifndef EMPRESA_H
#define EMPRESA_H

#include "Funcionario.h"
#include "PessoaFisica.h"
#include "PessoaJuridica.h"
#include <iostream>
#include <string>
using namespace std;

class Empresa : public PessoaJuridica {
  friend ostream &operator<<(ostream &, const Empresa &);

public:
  Empresa(int, int, string, string);
  ~Empresa();
  void armazenaCliente(const PessoaFisica &);
  void armazenaEmpregado(const Funcionario &);

  void removeCliente(string);
  void removeEmpregado(string);

  void imprimir();

private:
  int tCliente, tEmpregado, numCliente, numEmpregados;
  PessoaFisica *clientes;
  Funcionario *empregados;
};

#endif