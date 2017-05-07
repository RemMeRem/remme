#ifndef USER_H
#define USER_H


#include<string>
#include<vector>
#include "Objective.h"

class User
{
public:
	std::string login;
	std::string password;

	std::string name;
	int age;
	std::string email;
	std::string phone;
	std::vector<Objective> objectives;

	User(std::string l, std::string pas, std::string n, int a, std::string e, std::string ph)
		:
		login(l), password(pas), name(n), age(a), email(e), phone(ph) {};
	~User() {};


};

#endif