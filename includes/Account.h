#pragma once
#include "Main.h"
#include "models/User.h"
#include "../src/models/RUser.h"


class Accout
{
public:
	Accout() = default;
	~Accout() = default;

	RUser getIntoAccount(std::string login, std::string password);
private:
	const std::vector<User> Accounts{ { 1, "User1_Name", "User1_Login", "1234", 3000, true },{ 2, "User2_Name", "User2_Login", "3214", 30000, true } };
};
