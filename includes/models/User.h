#pragma once
#include "../Main.h"

struct User {
	int Id;
	std::string Name;
	std::string Login;
	std::string Password;
	double Balance;
	bool IsActive;
};