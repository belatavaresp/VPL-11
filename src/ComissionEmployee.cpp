// CommissionEmployee.cpp
// Definições de função-membro da classe CommissionEmployee.
#include <iostream>
using std::cout;

#include "CommissionEmployee.h" // definição da classe CommissionEmployee

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
46 } // fim da função earnings
47
48 // imprime informações do CommissionEmployee
49 void CommissionEmployee::print() const
50 {
51 	//seu código aqui
55 } // fim da função print