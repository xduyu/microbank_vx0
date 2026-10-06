#include "../includes/Main.h"
#include "../includes/Account.h"
#include "./models/RUser.h"
using namespace std;

int main()
{
	std::string password, login;
	Accout* user = new Accout();
	
	while (true){
        std::cout << "Enter your login: ";
		std::cin >> login;
        std::cout << "Enter your password: ";
        std::cin >> password;
        RUser loggedUser = user->getIntoAccount(login, password);

        if (loggedUser.ok) {

            std::cout << "Name: " << loggedUser.Name << " | Balance: " << loggedUser.Balance << std::endl;
            break;
        }
        else {
            std::cout << "Wrong login or password." << std::endl;
        }
		
	}
	return 0;
}
