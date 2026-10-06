#include "../includes/Main.h"
#include "../includes/Account.h"

RUser Accout::getIntoAccount(std::string login, std::string password) {
    for (size_t i = 0; i < this->Accounts.size(); i++) {
        if (login == this->Accounts[i].Login && password == this->Accounts[i].Password) {
            return { this->Accounts[i].Id, this->Accounts[i].Name, this->Accounts[i].Login, this->Accounts[i].Balance, this->Accounts[i].IsActive, true };
        }
    }
    return { 0, "", "", 0.0, false, false };
}
