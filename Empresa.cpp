#include "Empresa.h"
#include "Funcionario.h"
#include "PessoaFisica.h"
#include <iostream>
#include <string>
using namespace std;

/*ostream &operator<<(ostream &out, const Empresa &f) {

  out << f.imprimir();
  return out;
}*/

Empresa::Empresa(int tC, int tE, string nF, string cn)
    : PessoaJuridica(nF, cn), numCliente(0), numEmpregados(0) {

  if (tC > 0 && tE > 0) {
    this->tCliente = tC;
    this->tEmpregado = tE;
    clientes = new PessoaFisica[tCliente];
    empregados = new Funcionario[tEmpregado];
  } else {
    clientes = nullptr;
    empregados = nullptr;
    this->tCliente = 0;
    this->tEmpregado = 0;
  }
}
Empresa::~Empresa() {
  if (clientes)
    delete clientes;
  if (empregados)
    delete empregados;
}

void Empresa::armazenaCliente(const PessoaFisica &p) {
  clientes[numCliente] = PessoaFisica(p.getPessoa(), p.getCpf());
  numCliente++;
}

void Empresa::armazenaEmpregado(const Funcionario &p) {
  empregados[numEmpregados] =
      Funcionario(p.getPessoa(), p.getCpf(), p.getQtdHrsTrab(),
                  p.getCargHrMen(), p.getMatricula(), p.getSalarioBase());
  numEmpregados++;
}

void Empresa::removeCliente(string n) {
  if (numCliente > 0) {
    for (int i = 0; i < numCliente; i++) {
      if (clientes[i].getPessoa() == n)
        clientes[i] = clientes[i + 1];
    }
    numCliente--;
  }
  return;
}

void Empresa::removeEmpregado(string e) {
  if (numEmpregados > 0) {
    for (int i = 0; i < numEmpregados; i++) {
      if (empregados[i].getPessoa() == e)
        empregados[i] = empregados[i + 1];
    }
    numEmpregados--;
  }
  return;
}
void Empresa::imprimir() {
  cout << "Lista de Funcionários" << endl << "-------------------" << endl;
  for (int i = 0; i < numEmpregados; i++) {
    cout << "Nome: " << empregados[i].getPessoa() << endl
         << "Matricula: " << empregados[i].getMatricula() << endl
         << "Carg. Horária: " << empregados[i].getCargHrMen() << endl
         << "Qtd. Horas Trabalhadas: " << empregados[i].getQtdHrsTrab() << endl
         << "Salário: " << empregados[i].getSalarioBase() << endl
         << "=================" << endl;
  }
  cout << endl;
  cout << "Lista de Clientes" << endl << "-----------------" << endl;
  for (int i = 0; i < numCliente; i++) {
    cout << "Nome: " << clientes[i].getPessoa() << endl
         << "CPF: " << clientes[i].getCpf() << endl
         << "=================" << endl;
  }
}
