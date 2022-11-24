// SalariedEmployee.cpp
// Definições de função-membro da classe SalariedEmployee.
#include <iostream>
using std::cout;

#include "SalariedEmployee.hpp" // definição da classe SalariedEmployee

// construtor
	SalariedEmployee::SalariedEmployee( const string &first,
		const string &last, const string &ssn, double salary )
		: Employee( first, last, ssn )
	{
		//seu código aqui
	
	}// fim do construtor SalariedEmployee
	
	// configura o salário
	void SalariedEmployee::setWeeklySalary( double salary ){
			//seu código aqui
		
	} // fim da função setWeeklySalary
	
	
	// retorna o salário
	double SalariedEmployee::getWeeklySalary() const
	{
		//seu código aqui
	
} // fim da função getWeeklySalary

// calcula os rendimentos;
// sobrescreve a função virtual pura earnings em Employee
double SalariedEmployee::earnings() const
{
			//seu código aqui
} // fim da função earnings
	
// imprime informações de SalariedEmployee
void SalariedEmployee::print() const
{
	//seu código aqui
	
}// fim da função print
	
	