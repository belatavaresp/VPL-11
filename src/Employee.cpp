//Employee.cpp

// Definições de função-membro da classe básica abstrata Employee.
// Nota: Nenhuma definição recebe funções virtuais puras.
#include <iostream>
using std::cout;

#include "Employee.hpp" // Definição da classe Employee

// construtor
Employee::Employee( const string &first, const string &last, const string &ssn )
			: firstName( first ), lastName( last ), socialSecurityNumber( ssn ){
			// corpo vazio
} // fim do construtor Employee

//configura o nome
void Employee::setFirstName(const string &first){
	//seu código aqui
}

//retorna o nome
void Employee::getFirstName() const{
	//seu código aqui
} 

// configura o sobrenome
void Employee::setLastName( const string &last )
{
		//seu código aqui

} // fim da função setLastName

// retorna o sobrenome
string Employee::getLastName() const{
	   	//seu código aqui
} // fim da função getLastName

// configura o SSN
void Employee::setSocialSecurityNumber( const string &ssn )
{
		//seu código aqui
		// deve validar
} // fim da função setSocialSecurityNumber

// retorna o SSN
string Employee::getSocialSecurityNumber() const
{
		//seu código aqui
} // fim da função getSocialSecurityNumber

// imprime informações de Employee (virtual, mas não virtual pura)
void Employee::print() const
{
	//seu código aqui
} // fim da função print