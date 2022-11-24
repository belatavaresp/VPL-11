// HourlyEmployee.cpp
// Definições de função-membro da classe HourlyEmployee.
#include <iostream>
using std::cout;

#include “HourlyEmployee.hpp” // definição da classe HourlyEmployee

// construtor
HourlyEmployee::HourlyEmployee( const string &first, const string &last,
				const string &ssn, double hourlyWage, double hoursWorked )
 				: Employee( first, last, ssn ){
 					
 			//seu código aqui
		// valida a remuneração por hora
			// valida as horas trabalhadas
} // fim do construtor HourlyEmployee

// configura a remuneração
void HourlyEmployee::setWage( double hourlyWage )
{ 			//seu código aqui

} // fim da função setWage

// retorna a remuneração

double HourlyEmployee::getWage() const
{
		//seu código aqui
} // fim da função getWage

// configura as horas trabalhadas
void HourlyEmployee::setHours( double hoursWorked )
{
	//seu código aqui
} // fim da função setHours

// retorna as horas trabalhadas
double HourlyEmployee::getHours() const
{
 		//seu código aqui
} // fim da função getHours

// calcula os rendimentos;
// sobrescreve a função virtual pura earnings em Employee
double HourlyEmployee::earnings() const
{
	//seu código aqui
} // fim da função earnings

// imprime informações do HourlyEmployee
void HourlyEmployee::print() const
{
		//seu código aqui
} // fim da função print