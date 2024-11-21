#include <iostream>

using namespace std;


void atribuireSirCaractere(char** target, const char* source)
{
	size_t bufferString = strlen(source) + 1;

	*target = new char [bufferString];
	strcpy_s(*target, bufferString, source);
}



class Utilizator {

private: // Sector Privat (Membrii aflati la acest nivel de acces NU pot fi accesati)


	unsigned id; // Numar Natural 
	char* username; // String
	char* email;  // String 
	char* password; // String 


public: // Sector Public (Membrii aflati la acest nivel de acces POT FI ACCESATI) 


	Utilizator() { /// Definitie Constructor fara parametrii (argumente)

		//// Definim Stringurile pe care le dorim sa le atribuim campurilor 


		// Initializam campurile 

		id = 0; // O initializam cu o valoare default 
	

		// Atribuire Nume de Utilizator 
		atribuireSirCaractere(&username, "Vasile"); // Atribuire Nume 
		atribuireSirCaractere(&email, "vasile79@gmail.com"); // Atribuire Email 
		atribuireSirCaractere(&password, "vasileParola");


	}

	// Definim Getteri 

	const unsigned _getIdUser()
	{
		return id;
	}

	const char* const _getUsername()
	{
		return username;
	}

	const char* const _getEmail()
	{
		return email;
	}

	const char* const _getPassword()
	{
		return password;
	}


};

int main()
{

	Utilizator vasileEntitate1; // Instantiez + Declansam constructorul fara parametrii 

	// Afisam Campurile :  ID | USERNAME |  EMAIL |  PASSWORD 

	cout << vasileEntitate1._getIdUser() << " | " << vasileEntitate1._getUsername() << " | " 
		<< vasileEntitate1._getEmail() << " | "
		<< vasileEntitate1._getPassword() << endl;

	Utilizator vasileEntitate2;  // Instantiem alt obiect dar Declansam acelasi constructor 

	cout << endl;

	/// VOM AVEA ACELASI REZULTAT

	cout << vasileEntitate2._getIdUser() << " | " << vasileEntitate2._getUsername() << " | "
		<< vasileEntitate2._getEmail() << " | "
		<< vasileEntitate2._getPassword() << endl;

	 




	return  0;
}

