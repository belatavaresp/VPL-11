// BasePlusCommissionEmployee.cpp
// Definições de função-membro BasePlusCommissionEmployee.
#include <iostream>
using std::cout;

// definição da classe BasePlusCommissionEmployee
#include "BasePlusCommissionEmployee.hpp"

// construtor
	BasePlusCommissionEmployee::BasePlusCommissionEmployee(
	const string &first, const string &last, const string &ssn,
	double sales, double rate, double salary )
	: CommissionEmployee( first, last, ssn, sales, rate )
	{
		//seu código aqui
		// valida e armazena o salário-base
} // fim do construtor BasePlusCommissionEmployee

// configura o salário-base
void BasePlusCommissionEmployee::setBaseSalary( double salary )
{
	//seu código aqui
	
} // fim da função setBaseSalary

// retorna o salário-base
double BasePlusCommissionEmployee::getBaseSalary() const
{
	//seu código aqui;
	
} // fim da função getBaseSalary

// calcula os rendimentos;
// sobrescreve a função virtual pura earnings em Employee
double BasePlusCommissionEmployee::earnings() const
{
	//seu código aqui
	
} // fim da função earnings

 // imprime informações de BasePlusCommissionEmployee
void BasePlusCommissionEmployee::print() const
{
	//seu código aqui;
	
} // fim da função print