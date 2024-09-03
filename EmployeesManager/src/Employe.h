#pragma once
#include <string>

struct Direction {
	std::string street;
	int number = 0;
	int zipCode = 0;
	std::string city;
	std::string country;
	
	Direction() {}
	Direction(std::string _street, int _number,
				int _zipCode, std::string _city,
				std::string _country) : street(_street),
		number(_number), zipCode(_zipCode), city(_city),
		country(_country){}

	std::string toString() {
		return "Direcion: \
				\n\t Calle: " + street + "\
				\n\t Numero: " + std::to_string(number) + "\
				\n\t Codigo Postal: " + std::to_string(zipCode) + "\
				\n\t Ciudad: " + city + "\
				\n\t Pais: " + country + "\n";
	}
};

struct EmployeeData {
	int id = 0;
	std::string name;
	std::string lastName;
	Direction direction;
	float salary = 0.0;
	char gender = ' ';
	char civilState = ' ';
	int numberOfSons = 0;

	EmployeeData() {}
	EmployeeData(int _id, std::string _name,
		std::string _lastName, Direction _direction,
		float _salary, char _gender, char _civilState, 
		int _numberOfSons): 
		id(_id), name(_name), lastName(_lastName),
		direction(_direction), salary(_salary), gender(_gender),
		civilState(_civilState), numberOfSons(_numberOfSons){}
};

class Employee {
private:
	EmployeeData employeeData;
public:
	Employee();
	Employee(int _id, std::string _name,
		std::string _lastName, std::string _street, int _number,
		int _zipCode, std::string _city,
		std::string _country,
		float _salary, char _gender, char _civilState,
		int _numberOfSons);

	int getId();
	std::string getName();
	std::string getLastName();
	std::string getDirection();
	float getSalary();
	char getGender();
	char getCivilState();
	int getNumberOfSons();
};