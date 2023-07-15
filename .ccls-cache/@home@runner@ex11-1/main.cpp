#include "Empresa.h"
#include "Funcionario.h"
#include "PessoaFisica.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
  Empresa e(10, 10, "Skynet", "080505215151");
  e.armazenaCliente(PessoaFisica("Euler", "00142365789"));
  e.armazenaCliente(PessoaFisica("Alícia", "01142365789"));
  e.armazenaEmpregado(
      Funcionario("Euler", "00142365789", 4, 25, "202254258454", 2450.10));
  e.armazenaEmpregado(
      Funcionario("José", "10142365789", 4, 25, "202254258454", 2450.10));
  e.removeEmpregado("José");
  e.removeCliente("Euler");
  e.imprimir();
}