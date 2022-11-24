// CommissionEmployee.cpp
// Definições de função-membro da classe CommissionEmployee.
#include <iostream>
using std::cout;

#include "ComissionEmployee.hpp" // definição da classe CommissionEmployee

// construtor
	CommissionEmployee::CommissionEmployee( const string &first,
	const string &last, const string &ssn, double sales, double rate )
	: Employee( first, last, ssn ){
		//seu código aqui
} // fim do construtor CommissionEmployee

// retorna a taxa de comissão
double CommissionEmployee::getCommissionRate() const{
	//seu código aqui
} // fim da função getCommissionRate

// configura a quantidade de vendas brutas
void CommissionEmployee::setGrossSales( double sales )
{
	//seu código aqui
} // fim da função setGrossSales

// retorna a quantidade de vendas brutas
double CommissionEmployee::getGrossSales() const
{
	//seu código aqui
} // fim da função getGrossSales

// calcula os rendimentos;
// sobrescreve a função virtual pura earnings em Employee
double CommissionEmployee::earnings() const
{
	//seu código aqui
} // fim da função earnings

// imprime informações do CommissionEmployee
void CommissionEmployee::print() const
{
	//seu código aqui
} // fim da função print