#include <windows.h>
#include <iostream>
#include <stdio.h>
#include <string>


int main(void);
void clear();
bool login(std::string username, std::string password);


int main(void)
{
	std::string username = "nanoo";
	std::string password = "nanoopw";
	bool loginstatus = login(username, password);

}

void clear()
{
	system("cls");
	// std::cout<< u8"\033[2J\033[1;1H";
}

bool login(std::string username, std::string password)
{
	std::string usernameInput;
	std::string passwordInput;

	bool i = true;

	while (i == true)
	{
		clear();
		std::cout << "Username >";
		std::cin >> usernameInput;
		std::cout << "\nPassword >";
		std::cin >> passwordInput;
		if (usernameInput == username && passwordInput == password)
		{
			clear();
			std::cout << "[+] Login successful";
			Sleep(3000);
			return true;
			clear();
			i = false;
		}
		else
		{
			clear();
			std::cout << "[-] Invalid credentials";
			Sleep(3000);
			clear();
		}
	}
}