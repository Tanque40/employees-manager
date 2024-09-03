#include "Employe.h"

Employee::Employee(){
}

Employee::Employee(int _id, std::string _name, std::string _lastName,
	std::string _street, int _number, int _zipCode,
	std::string _city, std::string _country,
	float _salary, char _gender, char _civilState,
	int _numberOfSons){
	Direction dir(_street, _number, _zipCode,
		_city, _country);
	employeeData = EmployeeData(_id, _name, _lastName, dir,
		_salary, _gender, _civilState, _numberOfSons);
}

int Employee::getId(){
	return employeeData.id;
}

std::string Employee::getName(){
	return employeeData.name;
}

std::string Employee::getLastName(){
	return employeeData.lastName;
}

std::string Employee::getDirection(){
	return employeeData.direction.toString();
}

float Employee::getSalary(){
	return employeeData.salary;
}

char Employee::getGender(){
	return employeeData.gender;
}

char Employee::getCivilState(){
	return employeeData.civilState;
}

int Employee::getNumberOfSons(){
	return employeeData.numberOfSons;
}
