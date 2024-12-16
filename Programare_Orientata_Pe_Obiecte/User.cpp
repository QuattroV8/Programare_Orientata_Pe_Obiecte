#include "User.h"

//** Implementarea Constructorilor **//


User::User() { // Constructor Fara Parametrii 

	// Alocam si Initializam date cu informatii IMPLICITE (DEFAULT )

	// Variabile cu Alocare Statica 
	id = 0;
	nrPosts = 0;
	isBanned = false;

	// Variabile cu Alocare Dinamica 

	stringHandling = new StringLGCS(); // E initializat cu o valoare implicita (default)

	/// FUNCTIILE STATICE SE INVOCA FOLOSIND "::" !!! 
	
	StringLGCS::allocAndFetchString(&this->username, stringHandling->getString());
	StringLGCS::allocAndFetchString(&this->email, stringHandling->getString());
	StringLGCS::allocAndFetchString(&this->password, stringHandling->getString());
}


User::User(unsigned id, const char* username, const char* email, const char* password)
{
	this->id = id;

	stringHandling = new StringLGCS(username); // Apelam constructorul cu parametrii 

	StringLGCS::allocAndFetchString(&this->username, stringHandling->getString());  // Setam Numele de Utilizator 
	stringHandling->setString(email); // Schimbam sirul cu urmatoarea informatie 
	StringLGCS::allocAndFetchString(&this->email , stringHandling->getString()); // Setam Adresa De Mail 
	stringHandling->setString(password);
	StringLGCS::allocAndFetchString(&this->password, stringHandling->getString()); // Setam Parola 

	this->nrPosts = 0; // Implicit 
	this->isBanned = false; // Implicit 
}

User::~User()
{
    // Eliberam Resursele ocupate de siruri 

	delete username;
	username = nullptr;
	delete email;
	email = nullptr;
	delete password;
	password = nullptr;
	delete stringHandling;
	stringHandling = nullptr;
}

unsigned const User::getId()
{
	return this->id;
}

const char* const User::getUsername()
{
	return this->username;
}

const char* const User::getEmail()
{
	return this->email;
}

const char* const User::getPassword()
{
	return this->password;
}

unsigned const User::getnrPosts()
{
	return this->nrPosts;
}

bool const User::getisBanned()
{
	return this->isBanned;
}

void User::setNrPosts(const unsigned nrPosts)
{
	this->nrPosts = nrPosts;
}

void User::setIsBanned(const bool isBanned)
{
	this->isBanned = isBanned;
}

void User::setUsername(const char* username)
{
	stringHandling->setString(username);
	StringLGCS::allocAndFetchString(&this->username, username);
}

void User::setEmail(const char* email)
{
	stringHandling->setString(email);
	StringLGCS::allocAndFetchString(&this->email, email);
}

void User::setPassword(const char* password)
{
	stringHandling->setString(password);
	StringLGCS::allocAndFetchString(&this->password, password);
}

void User::objectToString()
{
		// DOAR AFISAM CAMPURILE OBIECTULUI 

		std::cout << "\n{" << "\nID Utilizator : " << this->id << " ,\n"
			<< "Nume Utilizator : " << this->username << " ,\n"
			<< "Adresa Mail : " << this->email << " ,\n"
			<< "Parola Utilizator : " << this->password << " ,\n"
			<< "Numar Posturi : " << this->nrPosts << ", \n"
			<< "STATUS BANAT : " << (this->isBanned ? "ESTE INTERZIS " : "NU ESTE INTERZIS") << " PE LEAGUECS!!, \n }";
}













