#pragma once
// User.h --> Fisier Antent


#include "StringLGCS.h" 
#include <iostream>


// CLASA CU DECLARATIA MEMBRIILOR 
class User
{
private:  // Sector Privat 
	// Campuri 
	unsigned id;  // NUMAR NATURAL
	char* username; // SIR DE CARACTERE
	char* email; // SIR DE CARACTERE 
	char* password; // SIR DE CARACTERE
	unsigned nrPosts; // NUMAR NATURAL 
	bool isBanned; // E BANAT

	StringLGCS* stringHandling; // Manipuleaza Siruri de Caractere . 

public:  // Sector Public 

	/*
	*   CONSTRUCTORI
	*/

	User(); // Constructor fara parametrii 
	User(unsigned id, const char* username, const char* email, const char* password); // Constructor cu toti parametrii 

	/*
		DESTRUCTOR
	*/
	~User();

	/*
		GETTERI
	*/

	unsigned const getId();
	const char* const getUsername();
	const char* const getEmail();
	const char* const getPassword();
	unsigned const getnrPosts();
	bool const getisBanned();
	/*
	  SETTERI
	*/

	void setNrPosts(const unsigned nrPosts);
	void setIsBanned(const bool isBanned);
	void setUsername(const char* username);
	void setEmail(const char* email);
	void setPassword(const char* password);


	// Alte Functii 

	// Vizualizare Obiect 

	void objectToString();  // Transferam obiectul prin referinta constanta

};